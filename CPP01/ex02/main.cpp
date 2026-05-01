#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;


    std::cout << "address of str : " << &str << std::endl
              << "address held by stringPTR : " << stringPTR << std::endl
              << "address held by stringREF : " << &stringREF << std::endl
              << "The value of the str : " << str << std::endl
              << "The value pointed to by stringPTR : " << *stringPTR << std::endl 
              << "The value pointed to by stringREF : " << stringREF << std::endl;    
}
