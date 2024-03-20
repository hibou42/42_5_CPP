#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
