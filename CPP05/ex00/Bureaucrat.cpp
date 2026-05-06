#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name) , grade(grade)
{
    if (grade < 1)
        throw (GradeTooHighException());
    else if (grade > 150)
        throw (GradeTooLowException());
    std::cout << "Parameterized constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        grade = other.grade;
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}
std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw(GradeTooHighException());
    grade--;
}
void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw(GradeTooLowException());
    grade++;
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b){
    return (os << b.getName() << ", bureaucrat grade  " << b.getGrade() << std::endl);
}