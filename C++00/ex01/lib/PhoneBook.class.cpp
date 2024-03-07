# include "PhoneBook.class.hpp"

int		check(std::string str)
{
	if (str.length() == 0)
		return (1);
	int stop = 0;
	int i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && !std::isalpha(str[i]))
			stop++;
		i++;
	}
	return (stop);
}

void	PhoneBook::AddContact(void)
{
	std::string	new_lastname;
	std::string	new_firstname;
	std::string	new_nickname;
	std::string	new_phone;
	std::string	new_secret;

	std::cin.ignore();
	std::cout << "Please enter the informations :" << std::endl;
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, new_lastname);
	std::cout << "First name :" << std::endl;
	std::getline(std::cin, new_firstname);
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, new_nickname);
	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, new_phone);
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, new_secret);
	int stop = 0;
	stop += check(new_lastname);
	stop += check(new_firstname);
	stop += check(new_nickname);
	stop += check(new_phone);
	stop += check(new_secret);
	if (stop > 0)
	{
		std::cout << "Something went wrong ..." << std::endl;
		return;
	}
	std::cout << "Everything look good !" << std::endl;
	int x = this->_nbOfContact - 1;
	while(x >= 0)
	{
		if (x < 7)
		{
			this->_contact[x + 1].SetLastName(this->_contact[x].GetLastName());
			this->_contact[x + 1].SetFirstName(this->_contact[x].GetFirstName());
			this->_contact[x + 1].SetNickname(this->_contact[x].GetNickname());
			this->_contact[x + 1].SetPhoneNumber(this->_contact[x].GetPhoneNumber());
			this->_contact[x + 1].SetDarkestSecret(this->_contact[x].GetDarkestSecret());
		}
		x--;
	}
	this->_contact[0].SetLastName(new_lastname);
	this->_contact[0].SetFirstName(new_firstname);
	this->_contact[0].SetNickname(new_nickname);
	this->_contact[0].SetPhoneNumber(new_phone);
	this->_contact[0].SetDarkestSecret(new_secret);
	this->SetNbOfContact(1);
}

void	print(std::string str)
{
	if (str.length() > 10)
	{
		for(int x = 0; x < 9; x++)
			std::cout << str[x];
		std::cout << ".|";
	}
	else
	{
		for(int x = 10 - (int)str.length(); x > 0; x--)
			std::cout << " ";
		for(int x = 0; x < (int)str.length(); x++)
			std::cout << str[x];
		std::cout << "|";
	}
}

void	PhoneBook::Search(void)
{
	std::string	tmp;

	if (this->_nbOfContact == 0)
	{
		std::cout << "There is no contact" << std::endl;
		return;
	}
	std::cout << "|___________________________________________|" << std::endl;
	for(int i = 0; i < this->_nbOfContact; i++)
	{
		std::cout << "|         " << (char)this->_contact[i].index << "|";
		tmp = this->_contact[i].GetFirstName();
		print(tmp);
		tmp = this->_contact[i].GetLastName();
		print(tmp);
		tmp = this->_contact[i].GetNickname();
		print(tmp);
		std::cout << std::endl;
	}
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << "Choose an index to watch :" << std::endl;
	std::cin >> tmp;
	while (1)
	{
		if (tmp.length() != 1 || tmp[0] < '1' || tmp[0] > '8' || (int)tmp[0] - '0' > this->_nbOfContact)
		{
		std::cout << "Wrong index !" << std::endl;
		std::cout << "Choose an VALID index to watch :" << std::endl;
		std::cin >> tmp;
		}
		else
			break;
	}
	int x = (int)tmp[0] - '0' - 1;
	std::cout << this->_contact[x].GetLastName()  << std::endl;
	std::cout << this->_contact[x].GetFirstName()  << std::endl;
	std::cout << this->_contact[x].GetNickname()  << std::endl;
	std::cout << this->_contact[x].GetPhoneNumber()  << std::endl;
	std::cout << this->_contact[x].GetDarkestSecret()  << std::endl;
}


void	PhoneBook::SetNbOfContact(int i)
{
	if (i > 0 && this->_nbOfContact < 8)
		this->_nbOfContact += 1;
}

int	PhoneBook::GetNbOfContact() const
{
	return (this->_nbOfContact);
}

// Constructeur
PhoneBook::PhoneBook(void)
{
	for (int i = 0; i < 8; i++)
		_contact[i].index = i + 49;
	this->_nbOfContact = 0;
}

// Destructeur
PhoneBook::~PhoneBook(void) 
{
	std::cout << "Thanks for using the Amazing Phonebook !!!" << std::endl;
}