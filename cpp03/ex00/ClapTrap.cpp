#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name),
    _hitpoints(10),
    _energy_points(10),
    _attack_damage(0)
{

    std::cout << "ClapTrap " << this->_name << " comes to life !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ct) {

    std::cout << "ClapTrap " << ct._name << " just got cloned!" << std::endl;
    *this = ct;
}

ClapTrap::~ClapTrap() {

    std::cout << "ClapTrap " << this->_name << " returns to dust." << std::endl;
}

void    ClapTrap::attack(std::string const & target) {

    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
        << this->_attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
    this->_hitpoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if (amount <= 0)
        return ;
    this->_hitpoints += amount;
    std::cout << "ClapTrap " << this->_name << " gets healed by " << amount << " hitpoints. He now has " << this->_hitpoints << "!" << std::endl;
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->_name = rhs._name;
    this->_attack_damage = rhs._attack_damage;
    this->_energy_points = rhs._energy_points;
    this->_hitpoints = rhs._hitpoints;
    return *this;
}