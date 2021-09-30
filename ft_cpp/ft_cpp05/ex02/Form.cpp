#include "Form.hpp"

// CONSTRUCTORS/DESTRUCTOR
Form::Form() : _name("default form"), _sign_grade(1), _run_grade(1) {

}

Form::Form(std::string name, int sign_grade, int run_grade)
    : _name(name), _is_signed(false),
    _sign_grade(sign_grade), _run_grade(run_grade)
{
    if (sign_grade < 1 || run_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || run_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name),
    _is_signed(src._is_signed),
    _sign_grade(src._sign_grade),
    _run_grade(src._run_grade)
{

}

Form::~Form() {

}

// OVERLOAD = OPERATOR
Form & Form::operator=(Form const & rhs) {

    this->_is_signed = rhs.getIsSigned();
    return *this;
}

// GETTERS/SETTERS
std::string Form::getName(void) const {

    return (this->_name);
}

bool        Form::getIsSigned(void) const {

    return (this->_is_signed);
}

int   Form::getMinGradeToSign(void) const {

    return (this->_sign_grade);
}

int   Form::getMinGradeToRun(void) const {

    return (this->_run_grade);
}

void    Form::setIsSigned(bool sgn) {

    this->_is_signed = sgn;
}

// operator <<
std::ostream &  operator<<(std::ostream & out, Form const & rhs) {

    std::string form_position;

    if (rhs.getIsSigned())
        form_position = " is signed.";
    else
        form_position = " is not signed.";
    out << "Form " << rhs.getName() << form_position << " Min grade to sign: "
        << rhs.getMinGradeToSign() << ", min grade to run: "
        << rhs.getMinGradeToRun();
    return out;
}

// functions
void    Form::beSigned(Bureaucrat const & brc) {

    if (this->_is_signed == 1)
        throw Form::FormAlreadySignedException();
    else if (brc.getGrade() > this->getMinGradeToSign())
        throw Form::GradeTooLowException();
    else
        this->_is_signed = 1;
}

void    Form::check_execute(Bureaucrat const & executor, Form const & form) const {

    if (form.getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > form.getMinGradeToRun())
        throw Form::GradeTooLowException();
}