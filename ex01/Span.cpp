#include "Span.hpp"

template <typename T>
T subtract(const T &a, const T &b) {
	return b - a;
}

unsigned int Span::getN() const {
	return this->_N;
}

std::vector<int> Span::getVector() const {
	return this->_vector;
}

void Span::setN(unsigned int N) {
	this->checkN(N);
	this->_N = N;
}

Span::Span() {
	this->checkN(0);
	this->_N = 0;
}

Span::Span(unsigned int N) {
	this->checkN(N);
	this->_N = N;
}

Span::Span(const Span &span) {
	*this = span;
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		this->_N = span.getN();
	}
	return *this;
}

Span::~Span() {
}

void Span::checkN(unsigned int N) {
	if (N == 0 || N > UINT_MAX) {
		throw std::runtime_error("Out of range");
	}
}

void Span::checkVector() {
	if (this->_vector.size() == this->_N) {
		throw std::runtime_error("Span is full");
	}
}

void Span::addNumber() {
	this->checkVector();
	Span v = Span(this->_N);
	srand(time(NULL));
	for (size_t i = 0; i < this->_N; i++) {
		v.addNumber(static_cast<unsigned int>(rand()));
	}
	this->addNumber(v.getVector());
}

void Span::addNumber(int N) {
	this->checkVector();
	this->_vector.push_back(N);
}

void Span::addNumber(std::vector<int> const &vector) {
	int size = std::distance(vector.begin(), vector.end());
	if (size > static_cast<int>(this->_N))
		throw std::runtime_error("Out of vector range");
	this->_vector.insert(this->_vector.end(), vector.begin(), vector.end());
}

int Span::shortestSpan() {
	if (this->_vector.size() <= 1) {
		throw std::runtime_error("No span can be found");
	}
	std::vector<int> cp(this->_vector);
	std::sort(cp.begin(), cp.end());
	std::transform(cp.begin(), cp.end() - 1, cp.begin() + 1, cp.begin(), std::ptr_fun(subtract<int>));
	return (*std::min_element(cp.begin(), cp.end() - 1));
}

int Span::longestSpan() {
	if (this->_vector.size() <= 1) {
		throw std::runtime_error("No span can be found");
	}
	int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}
