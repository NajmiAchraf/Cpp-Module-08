#include "Span.hpp"

int main() {
	try {
		unsigned int N	= 10000;
		Span		 sp = Span(N);

		// sp.addNumber(25);
		// sp.addNumber(2);
		// sp.addNumber(24);
		srand(time(NULL));
		for (size_t i = 0; i < N; i++) {
			sp.addNumber(static_cast<unsigned int>(rand()));
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}