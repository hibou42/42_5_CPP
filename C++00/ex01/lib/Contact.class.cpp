#include "../src/main_lib.hpp"

// Constructeur
Contact::Contact(void) 
{
	this->_privateVar = 0;
	std::cout << "Constructor called" << std::endl;
}

// Constructeur de copie
Contact::Contact(const Contact& other) 
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Destructeur
Contact::~Contact(void) 
{
	std::cout << "Destructor called" << std::endl;
}

// Opérateur d'affectation
Contact& Contact::operator=(const Contact& rhs) 
{
	if (this != &rhs) {
		this->_privateVar = rhs._privateVar;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}
