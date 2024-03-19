#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();							// Constructeur par défaut
	Dog(Dog const &cpy);			// Constructeur de copie
	Dog &operator=(Dog const &rhs);	// Opérateur d'affectation
	~Dog();							// Destructeur

	virtual void	makeSound() const;
};

#endif
