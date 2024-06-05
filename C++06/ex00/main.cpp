#include "Converter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Usage: ./converter number" << std::endl;
		return 1;
	}

	Converter c(av[1]);
	std::cout << c.getStr() << std::endl;
	try	{
		c.execution();
		std::cout << c;
	}
	catch(const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
