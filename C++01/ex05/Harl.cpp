
#include "Harl.hpp"

void	Harl::complain(std::string str)
{
	void (Harl::*ptr_level[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	lvl[4] = { "debug", "info", "warning", "error" };
	std::string	LVL[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	int	check = 0;
	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == str || LVL[i] == str)
		{
			(this->*ptr_level[i])();
			check++;
		}
	}
	if (check == 0)
		std::cout << "Error : Your option is unavailable" << std::endl << "--> debug / info / warning / error" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

// Constructeur
Harl::Harl()
{
	// std::cout << "Constructor called" << std::endl;
}

// Destructeur
Harl::~Harl()
{
	// std::cout << "Destructor called" << std::endl;
}