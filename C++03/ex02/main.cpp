#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	ClapTrap	Clap;
	ScavTrap	Scav;
	FragTrap	Frag;
	ClapTrap	BarraClap("BarramïnClap");
	ScavTrap	BarraScav("BarramïnScav");
	FragTrap	BarraFrag("BarramïnFrag");
	std::cout << "##################################" << std::endl;
	Clap.getHitPoint();
	Clap.getEnergyPoint();
	Clap.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Scav.getHitPoint();
	Scav.getEnergyPoint();
	Scav.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	Frag.getHitPoint();
	Frag.getEnergyPoint();
	Frag.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	BarraClap.getHitPoint();
	BarraClap.getEnergyPoint();
	BarraClap.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	BarraScav.getHitPoint();
	BarraScav.getEnergyPoint();
	BarraScav.getAttackDamage();
	std::cout << "----------------------------------" << std::endl;
	BarraFrag.getHitPoint();
	BarraFrag.getEnergyPoint();
	BarraFrag.getAttackDamage();
	std::cout << "##################################" << std::endl;
	BarraScav.guardGate();
	BarraFrag.highFivesGuys();
	std::cout << "##################################" << std::endl;
	return (0);
}