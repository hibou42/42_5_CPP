#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap
{
private:
	std::string	_Name;
	int			_Life;
	int			_Energy;
	int			_Attack_Damage;

public:
	ClapTrap();									// Constructeur par défaut
	ClapTrap(std::string Name);					// Constructeur string (Polymorphisme)
	ClapTrap(const ClapTrap &cpy);				// Constructeur de copie
	ClapTrap &operator=(ClapTrap const &rhs);	// Opérateur d'affectation
	~ClapTrap();								// Destructeur

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif