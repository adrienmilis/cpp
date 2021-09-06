#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const & getType() const;
        void    setType(std::string new_type);
};

#endif

/* note : const at the end of a member function means that the pointer
    *this is const inside that member function */