#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "AAnimal.hpp"

class Brain
{
private:

protected:
	std::string	_ideas[100];

public:
	Brain();							// Constructeur par défaut
	Brain(Brain const &cpy);			// Constructeur de copie
	Brain &operator=(Brain const &rhs);	// Opérateur d'affectation
	~Brain();							// Destructeur

	std::string	getIdeas(int i) const;
	void		setIdeas(std::string const str, int const i);
};

#endif
