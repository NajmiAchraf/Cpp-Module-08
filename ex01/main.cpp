#include "Span.hpp"

int main() {
	try {
		unsigned int N	= 100;
		Span		 sp = Span(N);
		// Span		 v	= Span(N);

		sp.addNumber();
		// v.addNumber(25);
		// v.addNumber(2);
		// v.addNumber(24);
		// srand(time(NULL));
		// for (size_t i = 0; i < N; i++) {
		// 	v.addNumber(static_cast<unsigned int>(rand()));
		// }
		// sp.addNumber(v.getVector());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}