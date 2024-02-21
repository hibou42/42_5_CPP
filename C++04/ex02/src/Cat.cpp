#include "../lib/Cat.hpp"

Cat::Cat() : AAnimal(), _brain(new Brain())
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cpy) : AAnimal(cpy), _brain(new Brain (*cpy._brain))
{
	std::cout << "Copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuuuu" << std::endl;
}