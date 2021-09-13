#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		virtual ~Cat();

		virtual void	makeSound() const;

	private:

		// args

};

#endif
