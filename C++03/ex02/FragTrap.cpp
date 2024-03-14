#include "FragTrap.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	FragTrap::highFivesGuys() {
	std::cout << this->_Name << " want a high five !" << std::endl;
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default constructor FragTrap called" << std::endl;
	this->_Energy = 100;
	this->_Attack_Damage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	std::cout << "Name constructor FragTrap called" << std::endl;
	this->_Energy = 100;
	this->_Attack_Damage = 30;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap() {
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = cpy;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Assignment operator FragTrap called" << std::endl;
	if (this != &rhs) {
		this->_Name = rhs._Name;
		this->_Life = rhs._Life;
		this->_Energy = rhs._Energy;
		this->_Attack_Damage = rhs._Attack_Damage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Destructor : "<< this->_Name<< " FragTrap called" << std::endl;
}
