#include "../lib/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "hunting is my religion";
}

Brain::Brain(Brain const &cpy)
{
	*this = cpy;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++ )
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

std::string	Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdeas(std::string const str, int const i)
{
	_ideas[i] = str;
}