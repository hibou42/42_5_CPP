#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
private:

protected:
	std::string	_type;

public:
	Animal();								// Constructeur par défaut
	Animal(Animal const &cpy);				// Constructeur de copie
	Animal &operator=(Animal const &rhs);	// Opérateur d'affectation
	virtual ~Animal();						// Destructeur

	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif



void ft1(int i)
{
	int res = i + 4;
	return (res);
}

void ft1(char *str)
{
	printf("ici", str);
}