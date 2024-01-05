#include "Zombie.hpp"

void	ramdomChump(std::string name)
{
	Zombie	zombie = Zombie(name);
	zombie.announce();
}