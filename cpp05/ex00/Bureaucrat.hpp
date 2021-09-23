#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:

        std::string const   _name;
        int                 _grade;             

	public:

        // coplienne
		Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & rhs);

        // getters
        std::string const getName(void) const;
        int getGrade(void) const;

        // increment/decrement
        void    grade_increment(void);
        void    grade_decrement(void);

        // exceptions
        class GradeTooHighException;
        class GradeTooLowException;

};

// << overload
std::ostream & operator<<(std::ostream & out, Bureaucrat const & rhs);

#endif
