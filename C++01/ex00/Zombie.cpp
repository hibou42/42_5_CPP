#include "Zombie.hpp"

// Constructeur
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

// Constructeur de copie
Zombie::Zombie(const Zombie& other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Opérateur d'affectation
Zombie& Zombie::operator=(const Zombie& rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	std::cout << "Assignment operator called" << std::endl;
	return *this;
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