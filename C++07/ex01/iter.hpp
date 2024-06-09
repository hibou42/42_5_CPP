
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

template<typename T>
void		iter(T* const tab, int const size, void (*printIter)(T const &tab)) {
	for (int i = 0; i < size; i++)
		printIter(tab[i]);
}

template<typename T>
void	printIter(T const &i) {
	std::cout << "Iter = " << i << std::endl;
}

#endif
