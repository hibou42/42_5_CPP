#include "Zombie.hpp"

int	main()
{
	Zombie *zombie;

	zombie = newZombie("Philipe");
	zombie->announce();
	ramdomChump("Michel");
	delete zombie;
}