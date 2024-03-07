#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*_stuff;
	std::string	_name;

public:
	HumanB(std::string str);					// Constructeur
	~HumanB(void);								// Destructeur

	std::string	getName() const;
	std::string	getWeapon() const;
	void		setWeapon(Weapon &weapon);

	void		attack() const;
};

#endif
