#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

    
}

HumanB::~HumanB() {

}

void    HumanB::attack() {

    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wpn) {

    this->_weapon = &wpn;
}