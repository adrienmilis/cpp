#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:

		std::string	type;

	public:

		AMateria(std::string const & type);
		virtual	~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;	// ce comportement n'est pas defini
		virtual void use(ICharacter& target) = 0;	// ce comportement est defini

};

#endif