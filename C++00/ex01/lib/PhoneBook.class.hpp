#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "../src/main_lib.hpp"
# include "Contact.class.hpp"

class PhoneBook
{
private:

	Contact	_contact[8];
	int		_nbOfContact;

public:

	void	AddContact();
	void	Search();
	void	SetNbOfContact(int i);
	int		GetNbOfContact() const;

	PhoneBook(void);
	PhoneBook(const PhoneBook& other);			// Constructeur de copie (1)
	PhoneBook& operator=(const PhoneBook& rhs);	// Opérateur d'affectation (2)
	~PhoneBook(void);

};

#endif
