#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Test 1: bureaucrat with high enough grade signs form
    try {
        Bureaucrat b("Alice", 50);
        Form f("Tax Form", 75, 50);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
        std::cout << f << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Test 2: bureaucrat with too low grade tries to sign
    try {
        Bureaucrat b("Bob", 100);
        Form f("Military Form", 50, 25);
        std::cout << b << std::endl;
        std::cout << f << std::endl;
        b.signForm(f);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Test 3: form with invalid grade
    try {
        Form f("Invalid Form", 0, 50);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}