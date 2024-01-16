#include "Harl.hpp"
#include <iostream>


int	checkArg(int argc, char **argv);

int	main(int argc, char **argv)
{
	if (checkArg(argc, argv) != 0)
		return (1);

	Harl	lvl;
	lvl.complain(argv[1]);
	return (0);
}

int	checkArg(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Error : problem with checkArg" << std::endl;
		return (1);
	}
	return (0);
}