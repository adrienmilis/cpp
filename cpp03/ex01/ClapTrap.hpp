#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
    
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & ct);
        ~ClapTrap();

        virtual void    attack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
    
        ClapTrap &  operator=(ClapTrap const & rhs);
        
    protected:

        std::string _name;
        int         _hitpoints;
        int         _energy_points;
        int         _attack_damage;
};

#endif
