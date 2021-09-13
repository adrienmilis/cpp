#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat(Cat const & cat);
		virtual ~Cat();
		
		Cat & operator=(Cat const & rhs);

		virtual void	makeSound() const;
		Brain			*getBrainAddress();

	private:

		Brain	*_brain;

};

#endif
