#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    private:

        std::string	_target;

	public:

		// coplienne
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & sc_form);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		// getter
		std::string	getTarget(void) const;

		// func
		virtual void    execute(Bureaucrat const & executor) const;
};

#endif
