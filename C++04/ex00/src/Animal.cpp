#include "../lib/Animal.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	Animal::makeSound() const {
	std::cout << "Default Animal sound : BrrrrrrrrBrrrrrrrr" << std::endl;
}

// ============================================================================|
//
// Accesseurs (getters) et mutateurs (setters)
//
// ============================================================================|

std::string	Animal::getType() const {
	return (this->_type);
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

Animal::Animal() {
	std::cout << "Default constructor Animal called" << std::endl;
	this->_type = "default";
}

Animal::Animal(Animal const  &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Animal &Animal::operator=(Animal const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}
