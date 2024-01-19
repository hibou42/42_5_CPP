#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string str);							// Constructeur
	~Weapon(void);							// Destructeur
	void		setType(std::string str);
	std::string	getType() const;

};

#endif