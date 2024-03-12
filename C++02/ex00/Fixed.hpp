#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

public:
	Fixed();								// Constructeur
	Fixed(const Fixed &other);				// Constructeur de copie
	Fixed &operator=(const Fixed &other);	// Opérateur d'affectation
	~Fixed();								// Destructeur

	int getRawBits() const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed); // Opérateur d'affichage

#endif
