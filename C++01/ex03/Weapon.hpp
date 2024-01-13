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

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/