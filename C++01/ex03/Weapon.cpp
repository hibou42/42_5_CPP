#include "Weapon.hpp"

void		Weapon::setType(std::string str)
{
	this->_type = str;
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

// Constructeur
Weapon::Weapon(std::string str)
{
	this->setType(str);
	// std::cout << "Constructor called" << std::endl;
}

// Destructeur
Weapon::~Weapon(void)
{
	// std::cout << "Destructor called" << std::endl;
}