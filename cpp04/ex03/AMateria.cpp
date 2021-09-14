#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {

    // std::cout << "Materia constructed" << std::endl;
}

AMateria::~AMateria() {

	// std::cout << "Materia destroyed" << std::endl;
}

std::string const & AMateria::getType() const {

    return this->type;
}

