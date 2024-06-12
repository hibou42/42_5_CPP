#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <stdexcept>
#include <exception>

template <typename T>
class Array {
private:
	T *_tab;
	unsigned int _n;

protected:

public:
	Array() {
		_n = 0;
		_tab = NULL;
		_tab = new T[_n];
	}

	Array(unsigned int n) {
		_n = n;
		_tab = NULL;
		_tab = new T[n];
	}

	~Array() {}

	Array(Array const &cpy) : _n(cpy._n) {
		_tab = NULL;
		*this = cpy;
	}

	Array &operator=(Array const &rhs) {
		if (this != &rhs){
			_n = rhs.size();
			_tab = new T[_n];
			_tab = rhs._tab;
		}
		return (*this);
	}

	unsigned int size() const {
		return (_n);
}

	T &operator[](const unsigned int i) {
		if (i >= _n)
			throw Array::ExecutorException();
		return (_tab[i]);
	}

	class	ExecutorException : public std::exception {
	public :
		virtual const char* what() const throw();
	};
};

#endif
