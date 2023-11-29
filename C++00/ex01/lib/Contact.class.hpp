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

	int		index;

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

	Contact(void);
	Contact(const Contact& other);			// Constructeur de copie (1)
	Contact& operator=(const Contact& rhs);	// Opérateur d'affectation (2)
	~Contact(void);

};

#endif
