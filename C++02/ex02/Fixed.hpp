
#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

class Fixed
{
private:
	int					_nb;
	int const static	_nb_bits = 8;

public:
	Fixed(void);						// Constructeur par défaut
	Fixed(int nb);						// Constructeur int (Polymorphisme)
	Fixed(float nb);					// Constructeur float (Polymorphisme)
	Fixed(const Fixed &cpy);			// Constructeur de copie
	Fixed &operator=(Fixed const &rhs);	// Opérateur d'affectation
	~Fixed();							// Destructeur

	// méthodes de conversion

	float	toFloat(void) const;
	int		toInt(void) const;

	// setter / getter

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	// méthodes statiques:

	static Fixed &min(Fixed &lhs, Fixed &rhs);
	static Fixed min(Fixed const &lhs, Fixed const &rhs);
	static Fixed &max(Fixed &lhs, Fixed &rhs);
	static Fixed max(Fixed const &lhs, Fixed const &rhs);

	// opérateur de comparaison

	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;

	// opérateurs de arithmétiques

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	// opérateurs d’incrémentation et de décrémentation

	Fixed &operator++();	//pré-incrémentation
	Fixed  operator++(int);	//post-incrémentation
	Fixed &operator--(); 	//pré-décrémentation
	Fixed  operator--(int);	//post-décrémentation
};

// surcharge de l'opérateur de sortie:

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif