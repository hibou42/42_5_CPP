#include "HumanA.hpp"

std::string	HumanA::getName() const 
{
	return (this->_name);
}

std::string	HumanA::getWeapon() const
{
	return (this->_stuff.getType());
}

void		HumanA::attack() const
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon() << std::endl;
}

// Constructeur
HumanA::HumanA(std::string str, Weapon &weapon) : _stuff(weapon), _name(str)
{
	// std::cout << "Constructor called" << std::endl;
}
// Destructeur
HumanA::~HumanA(void)
{
	// std::cout << "Destructor called" << std::endl;
}