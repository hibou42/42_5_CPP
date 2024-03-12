#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPointValue;
	static const int fractionalBits = 8;

public:
	Fixed();								// Constructeur
	Fixed(int const value);					// Constructeur int (Polymorphisme)
	Fixed(float const value);				// Constructeur float (Polymorphisme)
	Fixed(const Fixed &other);				// Constructeur de copie
	Fixed &operator=(const Fixed &other);	// Opérateur d'affectation
	~Fixed();								// Destructeur

	int getRawBits() const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed); // Opérateur d'affichage

#endif
