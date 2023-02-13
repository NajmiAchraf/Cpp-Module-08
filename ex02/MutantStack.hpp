#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {

  public:
	typedef typename std::stack<T>::container_type::iterator	   iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack() {}

	MutantStack(const MutantStack &mutantStack) : std::stack<T>(mutantStack) {}

	MutantStack &operator=(const MutantStack &mutantStack) {
		if (this != &mutantStack) {
			std::stack<T>::operator=(mutantStack);
		}
		return *this;
	}

	~MutantStack() {}

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}

	const_iterator begin() const {
		return this->c.begin();
	}

	const_iterator end() const {
		return this->c.end();
	}
};

#endif
