#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include "AScalarConverter.hpp"

class Converter : public AScalarConverter
{
	public:
		Converter();
		Converter(std::string str);
		Converter(const Converter &cpy);
		Converter &operator=(const Converter &rhs);
		~Converter();

		void execution();
};

#endif