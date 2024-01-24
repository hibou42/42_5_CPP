#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap	Frag("Barramïn");
	Frag.attack("vilain");
	Frag.takeDamage(9);
	Frag.beRepaired(8);
	Frag.attack("vilain");
	Frag.takeDamage(3);
	Frag.beRepaired(3);
	Frag.attack("vilain");
	Frag.takeDamage(9);
	Frag.beRepaired(3);
	Frag.attack("vilain");
	Frag.takeDamage(1);
	Frag.highFivesGuys();
	return (0);
}