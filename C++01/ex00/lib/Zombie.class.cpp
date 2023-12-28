#include "../src/main_lib.hpp"

void	Zombie::announce(void)
{
	std::string str;

	str = 
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;

}

// Constructeur
Zombie::Zombie(void)
{
	this->_privateVar = 0;
	std::cout << "Constructor called" << std::endl;
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
		this->_privateVar = rhs._privateVar;
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

// Destructeur
Zombie::~Zombie(void)
{
	std::cout << "Destructor called" << std::endl;
}