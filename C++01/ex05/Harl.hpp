#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <iomanip>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Harl();								// Constructeur
	~Harl();							// Destructeur

	void	complain(std::string str);
	
};

#endif