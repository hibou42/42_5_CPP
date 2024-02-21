#include "../lib/Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain())
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &cpy) : AAnimal(cpy), _brain(new Brain (*cpy._brain))
{
	std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}