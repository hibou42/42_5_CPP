#include "HumanB.hpp"
#include <iostream>

std::string	HumanB::getName() const 
{
	return (this->_name);
}

std::string	HumanB::getWeapon() const
{
	return (this->_type->getType());
}

void	HumanB::attack() const
{
	if (this->_type == NULL)
		std::cout << this->getName() << " attacks without weapon" << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_type = &weapon;
}

// Constructeur
HumanB::HumanB(std::string str) : _name(str)
{
	// std::cout << "Constructor called" << std::endl;
}
// Destructeur
HumanB::~HumanB(void)
{
	// std::cout << "Destructor called" << std::endl;
}