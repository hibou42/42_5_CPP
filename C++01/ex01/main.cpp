#include "Zombie.hpp"

int	main()
{
	Zombie		*horde;

	horde = ZombieHorde(10, "The Elite");
	delete [] horde;
}
