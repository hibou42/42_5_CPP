#include "../lib/Dog.hpp"

// ============================================================================|
//
// Accesseurs (getters) et mutateurs (setters)
//
// ============================================================================|

Brain*	Dog::getBrain() const {
	return (this->_brain);
}

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

Dog::Dog() : Animal(), _brain(new Brain()) {
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &cpy) : Animal(cpy), _brain(new Brain (*cpy._brain)) {
	std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}
