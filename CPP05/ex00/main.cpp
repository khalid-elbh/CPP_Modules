#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b("Alice", 75);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Bob", 0);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Charlie", 151);
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Dave", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
