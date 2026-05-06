#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("ShrubberyCreationForm", 145, 137) , target("Default"){
    std::cout << "Default costructor is called for ShrubberyCreationForm" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137) ,target(target){
    std::cout << "Parameterized constructor called for ShrubberyCreationForm" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other), target(other.target){
    std::cout << "copy constructor called for ShrubberyCreationForm" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    if (this != &other){
        AForm::operator=(other);
        this->target = other.target;
    }
    return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "destructor is called for ShrubberyCreationForm" <<  std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (!this->getIsSigned())
        throw(NotSignedException());
    else if (this->getExecGrade() < executor.getGrade())
        throw(GradeTooLowException());
    std::ofstream outfile((target+"_shrubbery").c_str());
    std::string shrubbery =
    "          &&& &&  & &&\n"
    "      && &\\/&\\|& ()|/ @, &&\n"
    "      &\\/(/&/&||/& /_/)_&/_&\n"
    "   &() &\\/&|()|/&\\/ '%\" & ()\n"
    "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
    "&&   && & &| &| /& & % ()& /&&\n"
    " ()&_---()&\\&\\|&&-&&--%---()~\n"
    "     &&     \\|||\n"
    "             |||\n"
    "             |||\n"
    "             |||\n"
    "       , -=-~  .-^- _\n"
    "             `";
    if (!outfile.is_open())
    {
        throw(std::runtime_error("can't open the file."));
    }
    outfile << shrubbery;
    std::cout << target << "_shrubbery" << "has been created" << std::endl; 
}
