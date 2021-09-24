#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
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
    toutatis.guardGate();
    std::cout << std::endl;

    return (0);
}