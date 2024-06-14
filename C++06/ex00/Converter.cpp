#include "Converter.hpp"

void	Converter::convert(const std::string &ref) {
	double	nbr;
	char	*ptr = NULL;

	if (ref.length() == 1 && isprint(ref[0]) && !isdigit(ref[0]))
		nbr = static_cast<double>(ref[0]);
	else
		nbr = strtod(ref.c_str(), &ptr);
	if (ptr != NULL && !(ptr[0] == 0 || ptr[0] == 'f')) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

	if (ref.length() > 6)
		std::cout << std::setprecision(ref.length());

	std::cout << "char: ";
	if (isprint(static_cast<char>(nbr)) && nbr < 128 && nbr >= 0)
		std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
	else
		std::cout << "Not printable" << std::endl;

	std::cout << "int: ";
	if (nbr < INT_MAX && nbr > INT_MIN)
		std::cout << static_cast<int>(nbr) << std::endl;
	else
		std::cout << "Not printable" << std::endl;

	std::cout << "float: " << static_cast<float>(nbr);
	if (trunc(nbr) == nbr && nbr < 1000000 && nbr > -1000000)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;

	std::cout << "double: " << nbr;
	if (trunc(nbr) == nbr && nbr < 1000000 && nbr > -1000000)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

Converter::Converter() {}

Converter::Converter(const Converter &cpy) {
	(void)cpy;
}

Converter &Converter::operator=(const Converter &rhs) {
	(void)rhs; 
	return (*this);
}

Converter::~Converter() {}