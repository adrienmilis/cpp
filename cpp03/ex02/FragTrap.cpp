#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " just fell from the sky!" << std::endl;
}

FragTrap::~FragTrap() {

    std::cout << "FragTrap " << this->_name << " rose again to the heavens" << std::endl;
}

void    FragTrap::highFivesGuys(void) {

    std::cout << "FragTrap " << this->_name << " offers you A HIGH FIVE!!!" << std::endl;
}