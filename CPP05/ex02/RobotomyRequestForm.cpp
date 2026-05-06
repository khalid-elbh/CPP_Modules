#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
RobotomyRequestForm::RobotomyRequestForm(void):AForm("RobotomyRequestForm", 72, 45) , target("Default"){
    std::cout << "Default costructor is called for RobotomyRequestForm" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45) ,target(target){
    std::cout << "Parameterized constructor called for RobotomyRequestForm" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other), target(other.target){
    std::cout << "copy constructor called for RobotomyRequestForm" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    if (this != &other){
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "destructor is called for RobotomyRequestForm" <<  std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (!this->getIsSigned())
        throw(NotSignedException());
    else if (this->getExecGrade() < executor.getGrade())
        throw(GradeTooLowException());
    std::cout << "DRILLING NOISES... *BZZZZZ* *VRRRR*" << std::endl;
    srand(time(0));
    int r = rand();
    if (r % 2 == 0)
        std::cout << target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "robotomy failed on " << target << std::endl; 
}
