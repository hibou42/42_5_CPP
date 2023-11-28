#include "../src/main_lib.hpp"

// Constructeur
PhoneBook::PhoneBook(void) 
{
	//std::cout << "Constructor called" << std::endl;
}

// Constructeur de copie
PhoneBook::PhoneBook(const PhoneBook& other) 
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Opérateur d'affectation
PhoneBook& PhoneBook::operator=(const PhoneBook& rhs) 
{
	if (this != &rhs) {
		(void)rhs;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

// Destructeur
PhoneBook::~PhoneBook(void) 
{
	//std::cout << "Destructor called" << std::endl;
}