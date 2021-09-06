#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &wpn);
        void    attack();

};

#endif