#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "../src/main_lib.hpp"
# include "Contact.class.hpp"

class PhoneBook
{
private:

	Contact	contact[8];

public:

	int	publicVar;

	PhoneBook(void);							// Constructeur
	PhoneBook(const PhoneBook& other);			// Constructeur de copie (1)
	~PhoneBook(void);							// Destructeur
	PhoneBook& operator=(const PhoneBook& rhs);	// Opérateur d'affectation (2)

};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/