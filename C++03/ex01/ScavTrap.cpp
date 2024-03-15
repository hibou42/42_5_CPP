#include "ScavTrap.hpp"

// ============================================================================|
//
// Fonctions d'interaction
//
// ============================================================================|

void	ScavTrap::guardGate() {
	std::cout << this->_Name << " enter in gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_Life <= 0) {
		std::cout << "ScavTrap " << this->_Name << " is already dead and can't attack!" << std::endl;
	} else {
		if (this->_Energy > 0) {
			std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_Damage << " points of damage !" << std::endl;
			this->_Energy--;
		} else {
			std::cout << "ScavTrap no more energy, " << this->_Name << " can't attack ! " << std::endl;
		}
	}
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
