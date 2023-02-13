#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
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
	void addNumber(int N);

	int shortestSpan();
	int longestSpan();
};

#endif
