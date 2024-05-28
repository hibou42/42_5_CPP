#include "Bureaucrat.hpp"

int	main()
{
	int i = 0;
	std::cout << "\033[34m----Test Bureaucrat "<< ++i << " ----\033[0m" << std::endl;
	try {
		Bureaucrat	louis("Louis", 167);
		std::cout << louis << std::endl;
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[34m----Test Bureaucrat "<< ++i << " ----\033[0m" << std::endl;
	try {
		Bureaucrat	diane("Diane", 0);
		std::cout << diane << std::endl;
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[34m----Test Bureaucrat "<< ++i << " ----\033[0m" << std::endl;
	try {
		Bureaucrat	arnaud("Arnaud", 5);
		std::cout << arnaud;
		while (true) {
			arnaud.incrementation();
			std::cout << arnaud;
		}
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[34m----Test Bureaucrat "<< ++i << " ----\033[0m" << std::endl;
	try {
		Bureaucrat	marc("Marc", 145);
		std::cout << marc;
		while (true) {
			marc.decrementation();
			std::cout << marc;
		}
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[34m----Test Bureaucrat "<< ++i << " ----\033[0m" << std::endl;
	try {
		Bureaucrat	anna("Anna", 100);
		std::cout << "Start : " << anna;
		while (anna.getGrade() < 102) {
			anna.decrementation();
			std::cout << anna;
		}
		while (anna.getGrade() > 100) {
			anna.incrementation();
			std::cout << anna;
		}
		std::cout << "End : " << anna;
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}