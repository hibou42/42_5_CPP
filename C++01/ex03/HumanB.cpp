#include "HumanB.hpp"

void	HumanB::attack() const
{
	if (this->_stuff == NULL)
		std::cout << this->getName() << " attacks without weapon" << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

std::string	HumanB::getName() const 
{
	return (this->_name);
}

std::string	HumanB::getWeapon() const
{
	return (this->_stuff->getType());
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_stuff = &weapon;
}

// Constructeur
HumanB::HumanB(std::string str) : _name(str)
{
	this->_stuff = NULL;
	// std::cout << "Constructor called" << std::endl;
}

// Destructeur
HumanB::~HumanB(void)
{
	// std::cout << "Destructor called" << std::endl;
}
