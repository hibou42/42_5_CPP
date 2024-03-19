#include "../lib/WrongCat.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	WrongCat::makeSound() const {
	std::cout << "MIEW MIEW MIEW" << std::endl;
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Default constructor WrongCat called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cpy) : WrongAnimal(cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called" << std::endl;
}
