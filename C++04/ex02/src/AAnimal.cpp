#include "../lib/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(AAnimal const  &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}