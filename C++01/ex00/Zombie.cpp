#include "Zombie.hpp"

// Constructeur
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ !!!" << std::endl;
}

// Destructeur
Zombie::~Zombie(void)
{
	std::cout << _name << " : Destructor called" << std::endl;
}