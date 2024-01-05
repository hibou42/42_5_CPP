#include "../src/main_lib.hpp"
#include <string>

void	Contact::SetLastName(std::string str)
{
	this->_lastName = str;
}

void	Contact::SetFirstName(std::string str)
{
	this->_firstName = str;
}

void	Contact::SetNickname(std::string str)
{
	this->_nickname = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
}

void	Contact::SetDarkestSecret(std::string str)
{
	this->_darkestSecret = str;
}

std::string	Contact::GetLastName() const
{
	return (this->_lastName);
}

std::string	Contact::GetFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::GetNickname() const
{
	return (this->_nickname);
}

std::string	Contact::GetPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::GetDarkestSecret() const
{
	return (this->_darkestSecret);
}

// Constructeur
Contact::Contact(void) 
{
	//std::cout << "Constructor called" << std::endl;
}

// Constructeur de copie
Contact::Contact(const Contact& other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Opérateur d'affectation
Contact& Contact::operator=(const Contact& rhs)
{
	if (this != &rhs)
	{
		// this->_privateVar = rhs._privateVar;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

// Destructeur
Contact::~Contact(void) 
{
	//std::cout << "Destructor called" << std::endl;
}