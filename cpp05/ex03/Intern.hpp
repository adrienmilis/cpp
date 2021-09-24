#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

class Intern
{
	public:

		Intern();
        Intern(Intern const & src);
		virtual ~Intern();

        Intern & operator=(Intern const & rhs);

        void    makeForm(std::string form_name, std::string target) const;
};

#endif
