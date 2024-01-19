#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPointValue = value << fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPointValue = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixedPointValue = other.fixedPointValue;
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
	return fixedPointValue >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}