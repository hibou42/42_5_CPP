#include "../lib/AAnimal.hpp"

// ============================================================================|
//
// Accesseurs (getters) et mutateurs (setters)
//
// ============================================================================|

std::string	AAnimal::getType() const {
	return (this->_type);
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

AAnimal::AAnimal() {
	std::cout << "Default constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(AAnimal const  &cpy) {
	std::cout << "Copy constructor AAnimal called" << std::endl;
	*this = cpy;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	std::cout << "Assignment operator AAnimal called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal called" << std::endl;
}
