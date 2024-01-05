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
	Zombie(const Zombie& other);			// Constructeur de copie (1)
	Zombie& operator=(const Zombie& rhs);	// Opérateur d'affectation (2)
	void announce(void);
	~Zombie(void);							// Destructeur

};

Zombie	*newZombie(std::string name);
void	ramdomChump(std::string name);

#endif