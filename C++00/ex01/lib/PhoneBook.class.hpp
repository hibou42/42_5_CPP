#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include "Contact.class.hpp"

class PhoneBook
{
private:
	std::string paassword;
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
