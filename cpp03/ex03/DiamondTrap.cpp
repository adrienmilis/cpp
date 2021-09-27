#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name) {

    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    // this->ClapTrap::_name = this->_name + "_clap_name";
    std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap() {

    std::cout << "DiamondTrap " << this->_name << " dies." << std::endl;
}

void    DiamondTrap::whoAmI(void) {

    std::cout << "Name: " << this->_name << ", ClapTrap::name: " << this->ClapTrap::_name << std::endl;
}

void    DiamondTrap::attack(std::string const & target) {

    ScavTrap::attack(target);
}