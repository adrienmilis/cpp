#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

        std::string const   _name;
        bool                _is_signed;
        int const           _sign_grade;
        int const           _run_grade;

	public:

        // coplienne
		Form();
        Form(std::string name, int sign_grade, int run_grade);
        Form(Form const & src);
		virtual ~Form();
        Form & operator=(Form const & rhs);

        // getters
        std::string getName(void) const;
        bool        getIsSigned(void) const;
        int         getMinGradeToSign(void) const;
        int         getMinGradeToRun(void) const;

        // exceptions
        class GradeTooHighException;
        class GradeTooLowException;

        // fcts
        void    beSigned(Bureaucrat const & brc);
};

// operator <<
std::ostream &  operator<<(std::ostream & out, Form const & rhs);

#endif
