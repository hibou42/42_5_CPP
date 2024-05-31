
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cctype>
#include <sstream>
#include <climits>
#include <locale>

class Convert {
private:
	bool	_int;
	bool 	_char;
	bool 	_float;
	bool 	_double;
	bool	_spec;
	char 	_c;

	Convert* to_char(std::string str);
	Convert* to_int(std::string toint);
	Convert* to_double(std::string todouble);
	Convert* to_float(std::string tofloat);
protected:

public:
	Convert();
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &rhs);
	~Convert();
	void parsing_input(std::string input);
	void parsing_input_length_1(std::string input);
	Convert* convert_to(std::string convertto);
	void	printChar(std::string str);
	void	printInt(std::string toint);
	void	printDouble(std::string todouble);
	void	printFloat(std::string tofloat);
	bool	comptChar(std::string input, char c);
	void	ft_error(std::string err);
};

#endif
