#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap	Scav;
	ScavTrap	Barramin("Barramïn");
	std::cout << "##################################" << std::endl;
	Scav.getHitPoint();
	Scav.getEnergyPoint();
	Scav.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Barramin.getHitPoint();
	Barramin.getEnergyPoint();
	Barramin.getAttackDamage();
	std::cout << "##################################" << std::endl;
	Barramin.attack("vilain");
	Barramin.takeDamage(9);
	Barramin.beRepaired(8);
	Barramin.attack("vilain");
	Barramin.takeDamage(3);
	Barramin.beRepaired(3);
	Barramin.attack("vilain");
	Barramin.takeDamage(9);
	Barramin.beRepaired(3);
	Barramin.attack("vilain");
	Barramin.takeDamage(1);
	Barramin.guardGate();
	std::cout << "##################################" << std::endl;
	Scav.getHitPoint();
	Scav.getEnergyPoint();
	Scav.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Barramin.getHitPoint();
	Barramin.getEnergyPoint();
	Barramin.getAttackDamage();
	std::cout << "##################################" << std::endl;
	return (0);
}