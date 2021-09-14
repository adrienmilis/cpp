#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:

        AMateria	**_inventory;		// inventory = new AMateria*[4];
		std::string	_name;

	public:

		Character(std::string name);
		Character(Character const & crt);
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter & target);

		Character & operator=(Character const & rhs);
};

#endif
