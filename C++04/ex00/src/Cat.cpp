#include "../lib/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cpy) : Animal(cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuuuu" << std::endl;
}