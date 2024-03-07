#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(std::string	_name);				// Constructeur
	~Zombie(void);							// Destructeur

	void announce(void);
};

Zombie	*newZombie(std::string name);
void	ramdomChump(std::string name);

#endif
