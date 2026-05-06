#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    public:
    Intern();
    Intern(const Intern& other);
    Intern &operator=(const Intern &other);
    ~Intern();
    AForm *makeForm(std::string name, std::string  target);
    class UnknownFormException : public std::exception{
        const char *what() const throw();
    };
    private:
    AForm *createPresidentialForm(std::string target);
    AForm *createRobotomyForm(std::string target);
    AForm *createShrubberyform(std::string target);
};



#endif