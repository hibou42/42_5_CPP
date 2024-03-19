#include "../lib/Dog.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

Dog::Dog() : Animal() {
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &cpy) : Animal(cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
}
