#include "Cat.hpp"

Cat::Cat() {

    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & cat) {

    this->type = cat.type;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100; i++) {
        this->_brain->setIdea(i, cat._brain->getIdea(i));
    }
}

Cat::~Cat() {

    delete this->_brain;
	std::cout << "Cat destroyed" << std::endl;
}

void    Cat::makeSound() const {

    std::cout << "Meow" << std::endl;
}

// performs a deep copy of Cat
Cat & Cat::operator=(Cat const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->type = rhs.type;
    this->_brain = new Brain();
    for (int i = 0 ; i < 100; i++) {
        this->_brain->setIdea(i, rhs._brain->getIdea(i));
    }
    return *this;
}

Brain   *Cat::getBrainAddress() {

    return this->_brain;
}