#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// Constructeur
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << _name << " : Constructor called" << std::endl;
}

// Destructeur
Zombie::~Zombie(void)
{
	std::cout << _name << " : Destructor called" << std::endl;
}
