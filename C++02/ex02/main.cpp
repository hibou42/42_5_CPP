#include "Fixed.hpp"

int main(void)
{
	{
	std::cout << "\033[31mPDF test code :\033[0m" << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	// return 0;
	std::cout << "\033[31mEnd of PDF test code :\033[0m" << std::endl;
	}
	{
	std::cout << "\033[31mMy test code :\033[0m" << std::endl;
	Fixed 		a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
	Fixed	c(5);
	std::cout << "c = 5" << std::endl;
	Fixed	d(10);
	std::cout << "d = 10" << std::endl;
	Fixed	e(12.05f);
	std::cout << "e = 12.05" << std::endl;
	Fixed	f(5);
	std::cout << "f = 5" << std::endl;

	std::cout << "\033[31mTEST OPERATEURS DE COMPARAISON\033[0m" << std::endl;
	if (d > c)
		std::cout << "d > c\t" << d << " > " << c << std::endl;
	else
		std::cout << "d < c\t" << d << " > " << c << std::endl;

	if (d <= e)
		std::cout << "d <= e\t" << d << " <= " << e << std::cout;
	std::cout << "c == f\t" <<std::endl;
	if (c == f)
		std::cout << "c == f\t" << c << "==" << f << std::endl;

	std::cout << "\033[31mTEST OPERATEURS ARITHMETIQUE\033[0m" << std::endl;
	std::cout << "c + d =\t" << c + d << std::endl;
	std::cout << "d - e =\t" << d - e << std::endl;
	std::cout << "c x f =\t" << c * f << std::endl;
	std::cout << "e / c =\t" << e / c << std::endl;

	return 0;
	}
}
