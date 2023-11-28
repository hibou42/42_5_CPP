# include "main_lib.hpp"

int		hardwork(std::string input);

void	input()
{
	std::string	input;

	std::cout << "Welcome to the Amazing Phonebook !!!" << std::endl;
	while (1)
	{
		std::cout << "Make a choice 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> input;
		if (hardwork(input) != 0)
			break;
	}

}

int		hardwork(std::string input)
{
	if (input.length() == 3 && (input == "ADD" || input == "add"))
	{
		add();
		return 0;
	}
	else if (input.length() == 6 && (input == "SEARCH" || input == "search"))
	{
		search();
		return 0;
	}
	else if (input.length() == 4 && (input == "EXIT" || input == "exit"))
	{
		std::cout << "Thanks for using the Amazing Phonebook !!!" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "No option available with --> " << input << std::endl;
		return 0;
	}
}