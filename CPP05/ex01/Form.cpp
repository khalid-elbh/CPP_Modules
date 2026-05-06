#include "Form.hpp"
#include "Bureaucrat.hpp"
// Orthodox Canonical Form

//// Default constructor
Form::Form(): Name("Default"), IsSigned(false), SignGrade(150), ExecGrade(150){
    std::cout << "Default constructor called for Form" << std::endl;
}

//// Parameterized constructor (just added it not part of the Orthodox Canonical Form)
Form::Form(std::string Name, int SignGrade, int ExecGrade):Name(Name), IsSigned(false), SignGrade(SignGrade), ExecGrade(ExecGrade){
    if (SignGrade < 1 || ExecGrade < 1)
        throw(GradeTooHighException());
    else if (SignGrade > 150 || ExecGrade > 150)
        throw(GradeTooLowException());
    std::cout << "Parameterized constructor called for Form" << std::endl;
}

//// copy constructor
Form::Form(const Form &other):Name(other.Name), IsSigned(other.IsSigned), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade){
    std::cout << "Copy constructor called for Form" << std::endl;
}

//// Copy assignment operator
Form& Form::operator=(const Form &other){
    std::cout << "Copy assignment operator called for Form" << std::endl;
    if (this != &other)
        this->IsSigned = other.IsSigned;
    return *this;
}
Form::~Form(){
    std::cout << "destructor is called for Form ." << std::endl;
}
// end of Orthodox Canonical Form


// exception for grade range 150-1

const char *Form::GradeTooHighException::what() const throw(){
    return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw(){
    return "Grade is too low!";
}

// getters 
std::string Form::getName() const{
    return this->Name;
}

int Form::getExecGrade() const{
    return this->ExecGrade;
}

int Form::getSignGrade() const{
    return this->SignGrade;
}

bool Form::getIsSigned() const{
    return this->IsSigned;
}

std::ostream &operator<<(std::ostream &os,const Form &form){
    os << "Form: " << form.getName() 
   << " | Signed: " << form.getIsSigned()
   << " | Grade to sign: " << form.getSignGrade()
   << " | Grade to execute: " << form.getExecGrade() << std::endl;
   return os;
}

void Form::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= this->SignGrade)
        this->IsSigned = true;
    else
        throw(GradeTooLowException());
}
