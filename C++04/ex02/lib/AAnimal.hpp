#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
private:

protected:
	std::string	_type;

public:
	AAnimal();								// Constructeur par défaut
	AAnimal(AAnimal const &cpy);			// Constructeur de copie
	AAnimal &operator=(AAnimal const &rhs);	// Opérateur d'affectation
	virtual ~AAnimal();						// Destructeur

	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif
