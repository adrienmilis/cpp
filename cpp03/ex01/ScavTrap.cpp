#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->_hitpoints = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap " << this->_name << " rose from the ground." << std::endl;
}

ScavTrap::~ScavTrap() {

    std::cout << "ScavTrap " << this->_name << " died in misery." << std::endl;
}

void    ScavTrap::attack(std::string const & target) {

    std::cout << "ScavTrap " << this->_name  << " slams " << target
        << " on the ground. " << this->_attack_damage
        << " damage dealt."<< std::endl;
}

void    ScavTrap::guardGate() {

    std::cout << "ScavTrap " << this->_name
        << " has entered gate keeper mode." << std::endl;
}