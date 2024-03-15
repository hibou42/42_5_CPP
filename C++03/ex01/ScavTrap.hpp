#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();									// Constructeur par défaut
	ScavTrap(std::string Name);					// Constructeur string (Polymorphisme)
	ScavTrap(const ScavTrap &cpy);				// Constructeur de copie
	ScavTrap &operator=(ScavTrap const &rhs);	// Opérateur d'affectation
	~ScavTrap();								// Destructeur

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
