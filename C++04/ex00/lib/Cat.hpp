#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();							// Constructeur par défaut
	Cat(Cat const &cpy);			// Constructeur de copie
	Cat &operator=(Cat const &rhs);	// Opérateur d'affectation
	~Cat();							// Destructeur

	void	makeSound() const;

};

#endif

