#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	louis("Louis", 167);
		std::cout << louis << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	diane("Diane", 0);
		std::cout << diane << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	arnaud("Arnaud", 5);
		std::cout << arnaud;
		while (1)
		{
			arnaud.incrementation();
			std::cout << arnaud;
		}
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	marc("Marc", 145);
		std::cout << marc;
		while (1)
		{
			marc.decrementation();
			std::cout << marc;
		}
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	anna("Anna", 100);
		std::cout << "Start : " << anna;
		while (anna.getGrade() < 105)
		{
			anna.decrementation();
			std::cout << anna;
		}
		while (anna.getGrade() > 100)
		{
			anna.incrementation();
			std::cout << anna;
		}
		std::cout << "End : " << anna;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}