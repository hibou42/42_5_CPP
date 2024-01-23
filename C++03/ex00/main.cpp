#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap	Clap("Barramïn");
	Clap.attack("vilain");
	Clap.takeDamage(9);
	Clap.beRepaired(8);
	Clap.attack("vilain");
	Clap.takeDamage(3);
	Clap.beRepaired(3);
	Clap.attack("vilain");
	Clap.takeDamage(9);
	Clap.beRepaired(3);
	Clap.attack("vilain");
	Clap.takeDamage(1);
	return (0);
}