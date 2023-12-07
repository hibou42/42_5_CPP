#include "../src/main_lib.hpp"

// Constructeur
Sample::Sample(void)
{
	this->_privateVar = 0;
	std::cout << "Constructor called" << std::endl;
}

// Constructeur de copie
Sample::Sample(const Sample& other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Opérateur d'affectation
Sample& Sample::operator=(const Sample& rhs)
{
	if (this != &rhs)
		this->_privateVar = rhs._privateVar;
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

// Destructeur
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}