#include "Zombie.hpp"

int main(void) {

    Zombie  *zom;

    zom = newZombie("Pablito");
    zom->announce();
    delete zom;
    std::cout << "Print after delete statement" << std::endl;
    randomChump("Juan");
    std::cout << "Print after randomChump" << std::endl;
    return (0);
}