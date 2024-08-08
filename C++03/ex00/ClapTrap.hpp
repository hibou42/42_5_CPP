#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_Name;
	int			_Life;
	int			_Energy;
	int			_Attack_Damage;

public:
	ClapTrap();									// Constructeur par défaut
	ClapTrap(std::string const Name);					// Constructeur string (Polymorphisme)
	ClapTrap(const ClapTrap &cpy);				// Constructeur de copie
	ClapTrap &operator=(ClapTrap const &rhs);	// Opérateur d'affectation
	virtual ~ClapTrap();								// Destructeur

	unsigned int getEnergyPoint() const;
	unsigned int getHitPoint() const;
	unsigned int getAttackDamage() const;

	const void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
