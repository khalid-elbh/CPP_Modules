#include "AForm.hpp"
#include "Bureaucrat.hpp"
// Orthodox Canonical AForm

//// Default constructor
AForm::AForm(): Name("Default"), IsSigned(false), SignGrade(150), ExecGrade(150){
    std::cout << "Default constructor called for AForm" << std::endl;
}

//// Parameterized constructor (just added it not part of the Orthodox Canonical AForm)
AForm::AForm(std::string Name, int SignGrade, int ExecGrade):Name(Name), IsSigned(false), SignGrade(SignGrade), ExecGrade(ExecGrade){
    if (SignGrade < 1 || ExecGrade < 1)
        throw(GradeTooHighException());
    else if (SignGrade > 150 || ExecGrade > 150)
        throw(GradeTooLowException());
    std::cout << "Parameterized constructor called for AForm" << std::endl;
}

//// copy constructor
AForm::AForm(const AForm &other):Name(other.Name), IsSigned(other.IsSigned), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade){
    std::cout << "Copy constructor called for AForm" << std::endl;
}

//// Copy assignment operator
AForm& AForm::operator=(const AForm &other){
    std::cout << "Copy assignment operator called for AForm" << std::endl;
    if (this != &other)
        this->IsSigned = other.IsSigned;
    return *this;
}
AForm::~AForm(){
    std::cout << "destructor is called for AForm ." << std::endl;
}
// end of Orthodox Canonical AForm


// exception for grade range 150-1

const char *AForm::GradeTooHighException::what() const throw(){
    return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const throw(){
    return "Grade is too low!";
}
// exception for the form is not signed .

const char *AForm::NotSignedException::what() const throw(){
    return "Form is not signed .";
}
// getters 
std::string AForm::getName() const{
    return this->Name;
}

int AForm::getExecGrade() const{
    return this->ExecGrade;
}

int AForm::getSignGrade() const{
    return this->SignGrade;
}

bool AForm::getIsSigned() const{
    return this->IsSigned;
}

std::ostream &operator<<(std::ostream &os,const AForm &AForm){
    os << "AForm: " << AForm.getName() 
   << " | Signed: " << AForm.getIsSigned()
   << " | Grade to sign: " << AForm.getSignGrade()
   << " | Grade to execute: " << AForm.getExecGrade() << std::endl;
   return os;
}

void AForm::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= this->SignGrade)
        this->IsSigned = true;
    else
        throw(GradeTooLowException());
}
