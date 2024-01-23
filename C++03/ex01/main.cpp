#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap	Scav("Barramïn");
	Scav.attack("vilain");
	Scav.takeDamage(9);
	Scav.beRepaired(8);
	Scav.attack("vilain");
	Scav.takeDamage(3);
	Scav.beRepaired(3);
	Scav.attack("vilain");
	Scav.takeDamage(9);
	Scav.beRepaired(3);
	Scav.attack("vilain");
	Scav.takeDamage(1);
	Scav.guardGate();
	return (0);
}