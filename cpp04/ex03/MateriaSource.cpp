#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>

MateriaSource::MateriaSource() {

    this->_inventory = new AMateria*[4];
    for (int i = 0; i < 4 ; i++)
        this->_inventory[i] = NULL;
    // std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < 4 ; i++) {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
    delete [] this->_inventory;
	// std::cout << "MateriaSource destroyed" << std::endl;
}

void    MateriaSource::learnMateria(AMateria *m) {

    for (int i = 0; i < 4 ; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            return ;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const & type) {

    if (type.compare("ice") != 0 && type.compare("cure") != 0)
        return (0);

    AMateria    *new_materia;
    for (int i = 0; i < 4 ; i++) {
        if (this->_inventory[i]->getType().compare(type) == 0) {
            new_materia = this->_inventory[i]->clone();
            return new_materia;
        }
    }
    return (0);
}