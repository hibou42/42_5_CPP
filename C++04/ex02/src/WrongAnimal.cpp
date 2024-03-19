#include "../lib/WrongAnimal.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	WrongAnimal::makeSound() const {
	std::cout << "Default WrongAnimal sound : FAUUUUUUUX !!!" << std::endl;
}

// ============================================================================|
//
// Accesseurs (getters) et mutateurs (setters)
//
// ============================================================================|

std::string	WrongAnimal::getType() const {
	return (this->_type);
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

WrongAnimal::WrongAnimal() {
	std::cout << "Default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}
