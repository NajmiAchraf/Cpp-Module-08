#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <functional>
#include <iostream>
#include <vector>

class Span {

  private:
	std::vector<int> _vector;
	unsigned int	 _N;

  public:
	unsigned int	 getN() const;
	std::vector<int> getVector() const;
	void			 setN(unsigned int N);

	Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span &operator=(const Span &span);
	~Span();

	void checkN(unsigned int N);
	void checkVector();

	void addNumber();
	void addNumber(int N);
	void addNumber(std::vector<int> const &vector);

	int shortestSpan();
	int longestSpan();
};

#endif
