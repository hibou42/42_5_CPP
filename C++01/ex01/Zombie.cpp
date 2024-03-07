#include "Zombie.hpp"

void	Zombie::announce(int i)
{
	std::cout << _name << " " << i << " : BraiiiiiiinnnzzzZ !!!" << std::endl;
}

void Zombie::SetName(std::string name)
{
	this->_name = name;
}

// Constructeur
Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
}

// Destructeur
Zombie::~Zombie(void)
{
	std::cout << _name << " Destructor called" << std::endl;
}
