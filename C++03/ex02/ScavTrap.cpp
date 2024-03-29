#include "ScavTrap.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	ScavTrap::guardGate() {
	std::cout << this->_Name << " enter in gate keeper mode" << std::endl;
}

// ============================================================================|
//
// Construction, destruction et overload
//
// ============================================================================|

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Default constructor ScavTrap called" << std::endl;
	this->_Life = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	std::cout << "Name constructor ScavTrap called" << std::endl;
	this->_Life = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap() {
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "Assignment operator ScavTrap called" << std::endl;
	if (this != &rhs) {
		this->_Name = rhs._Name;
		this->_Life = rhs._Life;
		this->_Energy = rhs._Energy;
		this->_Attack_Damage = rhs._Attack_Damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor : "<< this->_Name<< " ScavTrap called" << std::endl;
}
