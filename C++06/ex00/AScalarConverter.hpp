#ifndef ASCALARACONVERTER_HPP
# define ASCALARACONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>
#include <cstdlib>

enum e_type {
	NONE,
	INT,
	FLOAT,
	CHAR,
	DOUBLE,
	LITERALS
};

class AScalarConverter {
private:
	char	_c;
	int		_n;
	float	_f;
	double	_d;

	bool	_impossible;

	std::string	_str;
	e_type		_type;

public:
	AScalarConverter();
	AScalarConverter(const AScalarConverter& src);
	AScalarConverter &operator=(const AScalarConverter &rhs);
	virtual ~AScalarConverter();

// Abstrait fonctions
	virtual void	execution() = 0;

// Init // Interaction fonctions 1
	void	setStr(std::string str);
	void	setType();

// Detect type // Interaction fonctions 2
	bool	isChar() const;
	bool	isInt() const;
	bool	isFloat() const;
	bool	isDouble() const;
	bool	isLiterals() const;

// Hardwork // Interaction fonctions 3
	void	convert();
	bool	isImpossible();

// Printer // Interaction fonctions 4
	void	printChar() const;
	void	printInt() const;
	void	printFloat() const;
	void	printDouble() const;

// Getters / Setter
	char	getC() const;
	void	setC(char c);

	int		getI() const;
	void	setI(int n);

	float	getF() const;
	void	setF(float f);

	double	getD() const;
	void	setD(double d);

	std::string	getStr() const;
	e_type		getType() const;

// Exeption handling
	class AScalarConverterException : public std::exception {
		virtual const char* what() const throw() {return "Unknown type";}
	};
};

std::ostream &operator<<(std::ostream &out, const AScalarConverter &rhs );

#endif