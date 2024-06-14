#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <climits>
#include <cmath>
#include <sys/types.h>

class Converter {
	private:
		Converter();
		Converter(const Converter &cpy);
		Converter &operator=(const Converter &rhs);
		~Converter();

	public:
		static void convert(const std::string &ref);
};

#endif