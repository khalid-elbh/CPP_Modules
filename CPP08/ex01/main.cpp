#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <list>
int main()
{

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    int size = 15000;
    Span bigSpan(size);
    std::list<int> randomNumbers;

    std::srand(time(NULL));
    for (int i = 0; i < size; i++) {
        randomNumbers.push_back(std::rand());
    }
    try {
        bigSpan.addrange(randomNumbers.begin(), randomNumbers.end());
        
        std::cout << "Shortest: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest: " << bigSpan.longestSpan() << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
