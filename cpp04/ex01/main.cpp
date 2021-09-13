#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    Animal  **animals = new Animal*[10];

    std::cout << "===FILL TAB WITH NEW DOGS AND CATS===" << std::endl;
    for (int i = 0; i < 10 ; i++) {
        if (i % 2 == 0) {
            animals[i] = new Cat();
        }
        else {
            animals[i] = new Dog();
        }
    }
    
    std::cout << "===DELETE DOGS AND CATS FROM TAB" << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    std::cout << "===SHOW THAT COPIES ARE DEEP COPIES" << std::endl;
    
    Cat chat1;
    Cat chat2;

    chat1 = chat2;
    std::cout << "chat1's brain: " << chat1.getBrainAddress() << ", chat2's brain: "
        << chat2.getBrainAddress() << std::endl;
    return (0);
}