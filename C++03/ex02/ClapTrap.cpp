#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	this->_Name = "Kevin";
	this->_Life = 10;
	this->_Energy = 10;
	this->_Attack_Damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor ClapTrap called" << std::endl;
	this->_Name = Name;
	this->_Life = 10;
	this->_Energy = 10;
	this->_Attack_Damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_Life = rhs._Life;
		this->_Energy = rhs._Energy;
		this->_Attack_Damage = rhs._Attack_Damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_Life <= 0)
		std::cout << "ClapTrap " << this->_Name << " is already dead and can't attack!" << std::endl;
	else
	{
		if (this->_Energy > 0)
		{
			std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_Damage << " points of damage !" << std::endl;
			this->_Energy--;
		}
		else
			std::cout << "ClapTrap no more energy, " << this->_Name << " can't attack ! " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Life <= 0)
		std::cout << "ClapTrap " << this->_Name << " is already dead and can't take damage !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_Name << " loses " << amount << " damage points !" << std::endl;
		this->_Life -= amount;
		if (this->_Life <= 0)
			std::cout << "ClapTrap " << this->_Name << " has just die !" << std::endl;
		else if (this->_Life == 1)
			std::cout << "ClapTrap " << this->_Name << " has only one life point left ! ACHTUNG !!!" << std::endl;
		else
			std::cout << "ClapTrap " << this->_Name << " have " << this->_Life << " life points left !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Life <= 0)
		std::cout << "ClapTrap " << this->_Name << " is already dead and can't be repaired !" << std::endl;
	else
	{
		if (this->_Energy > 0)
		{
			if (amount > 1)
				std::cout << "ClapTrap " << this->_Name << " ask the gods for " << amount << " life points" << std::endl;
			else
				std::cout << "ClapTrap " << this->_Name << " ask the gods for a single life point" << std::endl;
			this->_Life += amount;
			std::cout << "ClapTrap " << this->_Name << " now have " << this->_Life << " life points" << std::endl;
			this->_Energy--;
		}
		else
			std::cout << "ClapTrap no more energy, " << this->_Name << " can't repair himself! " << std::endl;
	}
}