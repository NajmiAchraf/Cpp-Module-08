#include "easyfind.hpp"
#include <array>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::array<int, 10> a;

		for (size_t i = 0; i < 10; i++) {
			a[i] = i * 10;
		}

		std::array<int, 10>::iterator it = easyfind(a, n);

		for (it = a.begin(); it != a.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(a, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
}

/* #include "easyfind.hpp"
#include <vector>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::vector<int> v;

		for (size_t i = 0; i < 10; i++) {
			v.push_back(i * 10);
		}

		std::vector<int>::iterator it = easyfind(v, n);

		for (it = v.begin(); it != v.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(v, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
} */

/* #include "easyfind.hpp"
#include <list>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::list<int> l;

		for (size_t i = 0; i < 10; i++) {
			l.push_back(i * 10);
		}

		std::list<int>::iterator it = easyfind(l, n);

		for (it = l.begin(); it != l.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(l, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
} */

/* #include "easyfind.hpp"
#include <deque>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::deque<int> d;

		for (size_t i = 0; i < 10; i++) {
			d.push_back(i * 10);
		}

		std::deque<int>::iterator it = easyfind(d, n);

		for (it = d.begin(); it != d.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(d, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
} */

/* #include "easyfind.hpp"
#include <set>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::set<int> s;

		for (size_t i = 0; i < 10; i++) {
			s.insert(i * 10);
		}

		std::set<int>::iterator it = easyfind(s, n);

		for (it = s.begin(); it != s.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(s, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
} */
