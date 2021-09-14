#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria	**_inventory;

	public:

		MateriaSource();
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria *m);
		virtual AMateria *createMateria(std::string const & type);

};

#endif
