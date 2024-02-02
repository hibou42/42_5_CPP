#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
private:

protected:
	std::string	_type;

public:
	WrongAnimal();									// Constructeur par défaut
	WrongAnimal(WrongAnimal const &cpy);			// Constructeur de copie
	WrongAnimal &operator=(WrongAnimal const &rhs);	// Opérateur d'affectation
	~WrongAnimal();									// Destructeur

	void	makeSound() const;
	std::string		getType() const;
};

#endif