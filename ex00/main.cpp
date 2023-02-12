#include "easyfind.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./EasyFind [number]" << std::endl;
		return 1;
	}
	int n = atoi(argv[1]);
	try {
		std::vector<int> v;

		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		v.push_back(50);

		std::vector<int>::iterator it = easyfind(v, n);

		for (it = v.begin(); it != v.end(); it++)
			std::cout << "*it = " << *it << std::endl;

		it = easyfind(v, n);
		std::cout << "easyfind(v, " << n << ") => " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "easyfind(v, " << n << ") => Error: " << e.what() << std::endl;
	}
	return 0;
}
