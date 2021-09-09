#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void) {

    ClapTrap    bipboop("bip-boop");

    bipboop.attack("a dragon");
    bipboop.takeDamage(5);
    bipboop.takeDamage(5);
    bipboop.beRepaired(10);
    std::cout << std::endl;

    ScavTrap    toutatis("toutatis");

    toutatis.attack("a killer robot");
    toutatis.guardGuate();
    std::cout << std::endl;

    FragTrap    magnus("magnus");
  
    magnus.attack("evil jesus");
    magnus.highFivesGuys();
    std::cout << std::endl;

    DiamondTrap jc("jc");

    jc.guardGuate();
    jc.highFivesGuys();
    jc.whoAmI();
    jc.attack("Thor");
    std::cout << std::endl;
    return (0);
}