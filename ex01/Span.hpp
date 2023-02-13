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
	unsigned int getN() const;
	void		 setN(unsigned int N);

	Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span &operator=(const Span &span);
	~Span();

	void checkN(unsigned int N);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

	int shortestSpan();
	int longestSpan();
};

#endif
