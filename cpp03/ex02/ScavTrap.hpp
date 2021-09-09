#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

/*  
    OK constructor, destructor and attack have different outputs
    OK proper construction / destruction chaining must be present
    OK initialize the attributes of ScavTrap and change their scope in ClapTrap
    - new function : void guardGuate();
    - extend the main
*/

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        void    attack(std::string const & target);
        void    guardGuate();
};

#endif