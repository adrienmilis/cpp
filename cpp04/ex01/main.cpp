#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    Animal  **animals = new Animal*[10];

    std::cout << "===FILL TAB WITH NEW DOGS AND CATS===" << std::endl;
    for (int i = 0; i < 10 ; i++) {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    std::cout << "===DELETE DOGS AND CATS FROM TAB===" << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    delete [] animals;

    std::cout << "===SHOW THAT COPIES ARE DEEP COPIES===" << std::endl;
    
    Cat chat1;
    Cat chat2;

    Brain   *chat2_brain = chat2.getBrain();
    chat2_brain->setIdea(0, "IDEE");
    std::cout << chat2.getBrain()->getIdea(0) << std::endl;
    chat1 = chat2;
    std::cout << "chat1's brain: " << chat1.getBrain() << ", chat2's brain: "
        << chat2.getBrain() << std::endl;
    std::cout << chat1.getBrain()->getIdea(0) << std::endl;
    return (0);
}