#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;

public:
	Dog();							// Constructeur par défaut
	Dog(Dog const &cpy);			// Constructeur de copie
	Dog &operator=(Dog const &rhs);	// Opérateur d'affectation
	~Dog();							// Destructeur

	Brain	*getBrain() const;
	void	makeSound() const;
};

#endif
