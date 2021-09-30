#include "Bureaucrat.hpp"

// EXCEPTIONS
class   Bureaucrat::GradeTooHighException : public std::exception
{
    public:

        virtual const char* what() const throw() {
            return ("Exception : grade too high, max is 1"); }
};

class   Bureaucrat::GradeTooLowException : public std::exception
{
    public:

        virtual const char* what() const throw() {
            return ("Exception : grade too low, min is 150"); }
};

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name), _grade(src._grade) {

    
}

Bureaucrat::~Bureaucrat() {
	
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

    // assignation operation

    this->_grade = rhs._grade;
    return *this;
}

// GETTERS FOR NAME AND GRADE
std::string Bureaucrat::getName(void) const {

    return this->_name;
}

int Bureaucrat::getGrade(void) const {

    return this->_grade;
}

// << OVERLOAD
std::ostream & operator<<(std::ostream & out, Bureaucrat const & rhs) {

    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return out;
}

// INCREMENT/DECREMENT
void    Bureaucrat::grade_increment() {

    if (this->_grade - 1 > 0)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::grade_decrement() {

    if (this->_grade + 1 <= 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

// FUNCTIONS
void    Bureaucrat::signForm(Form & f) const {

    try
    {
        f.beSigned(*this);
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    }
    catch (Form::FormAlreadySignedException & e)
    {
        std::cout << this->_name <<
            " cannot sign because form is already signed" << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << this->_name
            << " cannot sign because grade is too low." << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(Form const & form) const {

    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}