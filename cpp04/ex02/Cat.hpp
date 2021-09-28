#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

	public:

		Cat();
		Cat(Cat const & cat);
		virtual ~Cat();
		
		Cat & operator=(Cat const & rhs);

		virtual void	makeSound() const;
		Brain			*getBrain();

	private:

		Brain	*_brain;

};

#endif
