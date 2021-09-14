#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

    // std::cout << "Ice materia created" << std::endl;
}

Ice::~Ice() {

	// std::cout << "Ice materia destroyed" << std::endl;
}

AMateria    *Ice::clone() const {

    AMateria    *all_new = new Ice();
    return (all_new);
}

void    Ice::use(ICharacter & target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
