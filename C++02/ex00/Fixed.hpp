#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	fractionalBits = 8;

public:
	Fixed();								// Constructeur
	Fixed(const Fixed &other);				// Constructeur de copie (1)
	Fixed &operator=(const Fixed &other);	// Opérateur d'affectation (2)
	~Fixed();								// Destructeur

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/