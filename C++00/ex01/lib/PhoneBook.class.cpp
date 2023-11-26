#include "../src/phonebook.hpp"

// Constructeur
PhoneBook::PhoneBook(void) 
{
	this->_privateVar = 0;
	std::cout << "Constructor called" << std::endl;
}

// Constructeur de copie
PhoneBook::PhoneBook(const PhoneBook& other) 
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Destructeur
PhoneBook::~PhoneBook(void) 
{
	std::cout << "Destructor called" << std::endl;
}

// Opérateur d'affectation
PhoneBook& PhoneBook::operator=(const PhoneBook& rhs) 
{
	if (this != &rhs) {
		this->_privateVar = rhs._privateVar;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}
