#include "Converter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: ./converter number" << std::endl;
		return 1;
	}

	try	{
		int size = strlen(av[1]);
		std::cout << std::setprecision(size);

		Converter::convert(av[1]);
	}
	catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
