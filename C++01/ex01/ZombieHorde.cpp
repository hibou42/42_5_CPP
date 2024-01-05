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

void Zombie::SetName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(int i)
{

	std::cout << _name << " " << i << " : BraiiiiiiinnnzzzZ !!!" << std::endl;
}