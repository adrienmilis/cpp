#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:

        Dog();
        virtual ~Dog();

        Dog & operator=(Dog const & rhs);

        virtual void    makeSound() const;

    private:

        Brain   *_brain;
};

#endif