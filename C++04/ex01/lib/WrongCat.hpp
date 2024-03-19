#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();									// Constructeur par défaut
	WrongCat(WrongCat const &cpy);				// Constructeur de copie
	WrongCat &operator=(WrongCat const &rhs);	// Opérateur d'affectation
	~WrongCat();								// Destructeur

	void	makeSound() const;
};

#endif
