#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
