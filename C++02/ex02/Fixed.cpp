#include "Fixed.hpp"

Fixed::Fixed() : _nb(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nb) : _nb(nb << _nb_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	_nb = (int)roundf(nb * (1 << this->_nb_bits));
}

Fixed::Fixed(const Fixed &cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb / (float)(1 << this->_nb_bits));
}

int		Fixed::toInt(void) const
{
	return roundf(this->_nb >> this->_nb_bits);
}

int		Fixed::getRawBits(void) const {

	return this->_nb;
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs){
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed	Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	Fixed res;

	if (lhs < rhs)
		res.setRawBits(lhs.getRawBits());
	else
		res.setRawBits(rhs.getRawBits());
	return (res);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed	Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	Fixed res;

	if (lhs > rhs)
		res.setRawBits(lhs.getRawBits());
	else
		res.setRawBits(rhs.getRawBits());
	return (res);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++()
{
	++_nb;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++_nb;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	--_nb;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--_nb;
	return (tmp);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
