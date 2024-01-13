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
	~PhoneBook(void);

};

#endif