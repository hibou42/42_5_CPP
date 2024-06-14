#include "Converter.hpp"

void	Converter::convert(const std::string &ref) {
	double	nbr;
	char	*ptr;

	nbr = strtod(ref.c_str(), &ptr);

	if (!(ptr[0] == 0 || ptr[0] == 'f')) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

	std::cout << "char: ";
	if (nbr < (INT_MAX / 1000) && nbr > INT_MIN / 1000) {
		if (isprint(nbr))
			std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "Not printable" << std::endl;
	}
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
