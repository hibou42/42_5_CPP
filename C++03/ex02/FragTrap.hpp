#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();									// Constructeur par défaut
	FragTrap(std::string Name);					// Constructeur string (Polymorphisme)
	FragTrap(const FragTrap &cpy);				// Constructeur de copie
	FragTrap &operator=(FragTrap const &rhs);	// Opérateur d'affectation
	~FragTrap();								// Destructeur

	void	highFivesGuys();
};

#endif
