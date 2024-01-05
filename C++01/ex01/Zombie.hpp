#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:

	std::string	_name;

public:

	Zombie(void);							// Constructeur
	Zombie(const Zombie& other);			// Constructeur de copie
	Zombie& operator=(const Zombie& rhs);	// Opérateur d'affectation
	void announce(int i);
	void SetName(std::string name);
	~Zombie(void);							// Destructeur

};

Zombie	*ZombieHorde(int N, std::string name);

#endif