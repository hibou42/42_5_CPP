#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&_stuff;
	std::string	_name;

public:
	HumanA(std::string str, Weapon &weapon);// Constructeur
	~HumanA(void);							// Destructeur

	std::string	getName() const;
	std::string	getWeapon() const;
	void		attack() const;

};

#endif