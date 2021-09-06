#include "Zombie.hpp"

int main(void) {

    Zombie  *zombie_ptr;

    zombie_ptr = zombieHorde(10, "Juanito");
    delete [] zombie_ptr;
    return (0);
}