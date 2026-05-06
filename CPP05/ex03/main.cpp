#include "Bureaucrat.hpp"
#include "Intern.hpp"
int main()
{
     try {
        Intern someRandomIntern;
        AForm* rrf;
        
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        
        std::cout << *rrf << std::endl;     
        Bureaucrat boss("Boss", 1);
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
