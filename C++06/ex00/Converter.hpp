#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <sys/types.h>

class Converter {
	private:
		Converter() {}
		Converter(const Converter &cpy) {(void)cpy;}
		Converter &operator=(const Converter &rhs) {(void)rhs; return (*this);}
		~Converter() {}

	public:
		static void convert(const std::string &ref);
};

#endif