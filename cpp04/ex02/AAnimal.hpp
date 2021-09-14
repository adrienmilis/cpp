#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    public:

        AAnimal();
        virtual ~AAnimal();

        std::string    getType() const;

        virtual void    makeSound() const = 0;

    protected:

        std::string type;
};

#endif