#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("PresidentialPardonForm", 25, 5) , target("Default"){
    std::cout << "Default constructor is called for PresidentialPardonForm" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), target(target){
    std::cout << "Parameterized constructor called for PresidentialPardonForm" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), target(other.target){
    std::cout << "copy constructor is called for PresidentialPardonForm" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "destructor is called for PresidentialPardonForm" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
    std::cout << "copy assignment operator is called for PresidentialPardonForm" << std::endl; 
    if (this != &other){
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(!this->getIsSigned())
        throw (NotSignedException());
    else if (this->getExecGrade() < executor.getGrade())
        throw(GradeTooLowException());
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
