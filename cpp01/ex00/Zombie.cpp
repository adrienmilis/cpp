#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

}

Zombie::~Zombie() {

    std::cout << "Zombie " << this->_name << " just died (for the 2nd time)" << std::endl;
}

void    Zombie::announce(void) {

    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
