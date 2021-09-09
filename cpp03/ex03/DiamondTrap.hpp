#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:

        DiamondTrap(std::string name);
        ~DiamondTrap();

        void    whoAmI();
        void    attack(std::string const & target);

    private:

        std::string _name;
};

#endif