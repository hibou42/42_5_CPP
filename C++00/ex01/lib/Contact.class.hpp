#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "../src/main_lib.hpp"
# include <string>

class Contact
{
private:

	std::string _lastName;
	std::string _firstName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:

	void	SetLastName(std::string str);
	void	SetFirstName(std::string str);
	void	SetNickname(std::string str);
	void	SetPhoneNumber(std::string str);
	void	SetDarkestSecret(std::string str);
	std::string	GetLastName() const;
	std::string	GetFirstName() const;
	std::string	GetNickname() const;
	std::string	GetPhoneNumber() const;
	std::string	GetDarkestSecret() const;

	Contact(void);							// Constructeur
	Contact(const Contact& other);			// Constructeur de copie (1)
	~Contact(void);							// Destructeur
	Contact& operator=(const Contact& rhs);	// Opérateur d'affectation (2)

};

#endif

/*
1 : Constructeur de copie : Il sert à créer une nouvelle instance en
copiant une instance existante.

2 : Opérateur d'affectation (operator=) : Il sert à copier les valeurs
d'une instance existante dans une autre déjà existante.
*/