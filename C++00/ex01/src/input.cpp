# include "../lib/PhoneBook.class.hpp"
# include "../lib/Contact.class.hpp"

int		hardwork(PhoneBook	*PB, std::string input);

void	input(PhoneBook	*PB)
{
	std::string	input;

	std::cout << "Welcome to the Amazing Phonebook !!!" << std::endl;
	while (1)
	{
		std::cout << "Make a choice 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> input;
		if (hardwork(PB, input) != 0)
			break;
	}
}

int		hardwork(PhoneBook	*PB, std::string input)
{
	if (input.length() == 3 && (input == "ADD" || input == "add"))
	{
		PB->AddContact();
		return 0;
	}
	else if (input.length() == 6 && (input == "SEARCH" || input == "search"))
	{
		PB->Search();
		return 0;
	}
	else if (input.length() == 4 && (input == "EXIT" || input == "exit"))
	{
		return 1;
	}
	else
	{
		std::cout << "No option available with --> " << input << std::endl;
		return 0;
	}
}