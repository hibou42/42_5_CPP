#include "Zombie.hpp"

int	main()
{
	std::cout << "------Stage 1------" << std::endl;
	{
		Zombie zombie("Maurice");
		zombie.announce();
	}
	std::cout << "------Stage 2------" << std::endl;
	{
		Zombie *zombie;
		zombie = newZombie("Philipe");
		zombie->announce();
		delete zombie;
	}
	std::cout << "------Stage 3------" << std::endl;
	ramdomChump("Michel");
}
