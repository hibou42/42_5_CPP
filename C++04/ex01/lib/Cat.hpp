#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;

public:
	Cat();							// Constructeur par défaut
	Cat(Cat const &cpy);			// Constructeur de copie
	Cat &operator=(Cat const &rhs);	// Opérateur d'affectation
	~Cat();							// Destructeur

	Brain	*getBrain() const;
	void	makeSound() const;
};

#endif
