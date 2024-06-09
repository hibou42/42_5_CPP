#include "Array.tpp"

Array::Array() {
	_tab = NULL;
	_tab = new T[n];
}

Array::Array(unsigned int n) {
	_tab = NULL;
	_tab = new T[n];
}

Array::~Array() {
	delete[] _tab;
}

Array::Array(Array const &cpy) : _n(cpy._n) {
	_tab = NULL;
	*this = cpy;
}

Array &Array::operator=(Array const &rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}
