#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
        Intern(Intern const & src);
		virtual ~Intern();

        Intern & operator=(Intern const & rhs);

        Form    *createPresidentialForm(std::string target) const;
        Form    *createRobotomyForm(std::string target) const;
        Form    *createShrubberyForm(std::string target) const;
        Form    *makeForm(std::string form_name, std::string target) const;
};

#endif
