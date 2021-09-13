#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{

	public:

		Brain();
		~Brain();

		std::string	getIdea(int index);
		void		setIdea(int index, std::string new_idea);

	private:

		std::string	_ideas[100];

};

#endif
