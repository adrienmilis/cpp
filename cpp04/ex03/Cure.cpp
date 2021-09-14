#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

    // std::cout << "Cure materia created" << std::endl;
}

Cure::~Cure() {

	// std::cout << "Cure materia destroyed" << std::endl;
}

AMateria    *Cure::clone() const {

    AMateria    *all_new = new Cure();
    return (all_new);
}

void    Cure::use(ICharacter & target) {

    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
