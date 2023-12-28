#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie
{
private:

	int	_privateVar;

public:

	int	publicVar;

	Zombie(void);							// Constructeur
	Zombie(const Zombie& other);			// Constructeur de copie (1)
	Zombie& operator=(const Zombie& rhs);	// Opérateur d'affectation (2)
	~Zombie(void);							// Destructeur

};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/