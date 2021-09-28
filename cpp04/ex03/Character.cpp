#include "Character.hpp"

/* CONSTRUCTORS, DESTRUCTOR, ASSIGNATION OVERLOAD */

Character::Character(std::string name) : _name(name) {

    this->_inventory = new AMateria*[4];
    for (int i = 0; i < 4 ; i++)
        this->_inventory[i] = NULL;
    // std::cout << "Character created" << std::endl;
}

Character::Character(Character const & crt) {

    this->_name = crt._name;
    this->_inventory = new AMateria*[4];

    // copy materias if they exist, else null
    for (int i = 0; i < 4 ; i++) {
        if (crt._inventory[i] == NULL)
            this->_inventory[i] = NULL;
        else {
            // on clone une nvelle materia du meme type
            this->_inventory[i] = crt._inventory[i]->clone();
        }
    }

}

Character::~Character() {

    for (int i = 0; i < 4 ; i++) {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
    delete [] this->_inventory;
    // std::cout << "Character destroyed" << std::endl;
}

Character & Character::operator=(Character const & rhs) {

    // the old materia of a character must be deleted
    this->_name = rhs._name;

    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    for (int i = 0; i < 4; i++) {
        if (rhs._inventory[i] == NULL)
            this->_inventory[i] = NULL;
        else
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
    return *this;
}

/* METHODS */

std::string const & Character::getName() const {

    return (this->_name);
}

void    Character::equip(AMateria *m) {

    for (int i = 0; i < 4 ; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx) {

    if (idx > 3 || idx < 0)
        return ;
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target) {

    if (idx > 3 || idx < 0)
        return ;
    if (this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}