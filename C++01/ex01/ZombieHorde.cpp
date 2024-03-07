#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombie[i].SetName(name);
		zombie[i].announce(i);
	}
	return (zombie);
}
