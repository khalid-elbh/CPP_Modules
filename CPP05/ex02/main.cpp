#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
    try {
        Bureaucrat bob("Bob", 70);
        ShrubberyCreationForm form("home");
        
        std::cout << bob << std::endl;
        std::cout << form << std::endl;
        
        bob.signForm(form);
        bob.executeForm(form);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        Bureaucrat foo("foo" , 15);
        Bureaucrat bar("bar" , 3);
        PresidentialPardonForm form("khalid");

        std::cout << foo << std::endl;
        std::cout << bar << std::endl;
        std::cout << form << std::endl;
        foo.signForm(form);
        bar.executeForm(form);
    }catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        Bureaucrat baz("baz" , 40);
        RobotomyRequestForm form("foobar");

        std::cout << baz << std::endl;
        std::cout << form << std::endl;

        baz.signForm(form);
        baz.executeForm(form);
    }catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
