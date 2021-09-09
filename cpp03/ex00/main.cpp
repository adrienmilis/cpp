#include "ClapTrap.hpp"
#include <iostream>

int main(void) {

    ClapTrap    bipboop("bip-boop");
    ClapTrap    pioupiou ("piou-piou");

    bipboop.attack("a dragon");
    bipboop.takeDamage(5);
    bipboop.takeDamage(5);
    bipboop.beRepaired(10);
    return (0);
}