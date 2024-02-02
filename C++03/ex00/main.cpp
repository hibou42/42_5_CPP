#include "ClapTrap.hpp"

// Jo code
int main (void)
{
	ClapTrap Clap;
	ClapTrap Barramin("Barramin");
	ClapTrap Gravlin("Gravlin");

	std::cout << "##################################" << std::endl;
	Barramin.getHitPoint();
	Barramin.getEnergyPoint();
	Barramin.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Gravlin.getHitPoint();
	Gravlin.getEnergyPoint();
	Gravlin.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Clap.getHitPoint();
	Clap.getEnergyPoint();
	Clap.getAttackDamage();

	std::cout << "##################################" << std::endl;
	Barramin.attack("Gravlin");
	Gravlin.takeDamage(Barramin.getAttackDamage());
	std::cout << "----------------------------------" << std::endl;
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
	std::cout << "----------------------------------" << std::endl;
	for(int i = 0; i < 12; i++)
		Gravlin.attack("vilain");

	std::cout << "##################################" << std::endl;
	Barramin.getHitPoint();
	Barramin.getEnergyPoint();
	Barramin.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Gravlin.getHitPoint();
	Gravlin.getEnergyPoint();
	Gravlin.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Clap.getHitPoint();
	Clap.getEnergyPoint();
	Clap.getAttackDamage();
	std::cout << "##################################" << std::endl;

	return (0);
}