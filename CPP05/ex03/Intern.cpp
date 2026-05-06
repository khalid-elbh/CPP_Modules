#include "Intern.hpp"



Intern::Intern(){}
Intern::Intern(const Intern& other){
    (void)other;
}
Intern &Intern::operator=(const Intern &other){
    (void)other;
    return (*this);
}
Intern::~Intern(){}

AForm *Intern::makeForm(std::string name, std::string  target){
    std::string option[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm *(Intern::*ptrf[3])(std::string)= {
        &Intern::createPresidentialForm,
        &Intern::createRobotomyForm,
        &Intern::createShrubberyform
    };
    for (int i = 0; i < 3; i++)
    {
        if (option[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*ptrf[i])(target);
        }
    }
    throw(UnknownFormException());
}

AForm *Intern::createPresidentialForm(std::string target){
    return (new PresidentialPardonForm(target));
}
AForm *Intern::createRobotomyForm(std::string target){
    return (new RobotomyRequestForm(target));
}
AForm *Intern::createShrubberyform(std::string target){
    return (new ShrubberyCreationForm(target));
}

const char *Intern::UnknownFormException::what() const throw(){
    return ("Unknown form name!");
}
