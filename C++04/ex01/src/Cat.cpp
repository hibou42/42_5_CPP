#include "../lib/Cat.hpp"

// ============================================================================|
//
// Accesseurs (getters) et mutateurs (setters)
//
// ============================================================================|

Brain*	Cat::getBrain() const {
	return (this->_brain);
}

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	Cat::makeSound() const {
	std::cout << "Miaouuuuuuuu" << std::endl;
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

Cat::Cat() : Animal(), _brain(new Brain()) {
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cpy) : Animal(cpy), _brain(new Brain (*cpy._brain)) {
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Assignment operator Cat called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
	delete this->_brain;
}
