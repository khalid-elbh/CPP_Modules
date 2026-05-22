#include "Span.hpp"
#include <stdexcept>
#include <algorithm>


Span::Span():N(0){}

Span::Span(unsigned int N):N(N){
    C.reserve(N);
}

Span::Span(const Span &other):N(other.N), C(other.C){}

Span &Span::operator=(const Span &other){
    if (this != &other){
        N = other.N;
        C = other.C;
    }
    return *this;
}

Span::~Span(){}


void Span::addNumber(int num){
    if (C.size() >= N)
        throw std::runtime_error("Cannot add number: Span has reached its maximum capacity");
    C.push_back(num);
}


 int Span::shortestSpan()const{
    if (C.size() <= 1)
        throw std::runtime_error("Span calculation failed: at least two numbers are required.");
    std::vector<int> cop = this->C;
    std::sort(cop.begin(), cop.end());
    int short_span = cop[1] - cop[0];
    for(size_t i = 1; i < cop.size() - 1; i++){
        if (short_span > (cop[i + 1] - cop[i]))
            short_span = cop[i + 1] - cop[i];
    }
    return short_span;
 }


int Span::longestSpan() const{
    if (C.size() <= 1)
        throw std::runtime_error("Span calculation failed: at least two numbers are required.");
    std::vector<int>::const_iterator max_value = std::max_element(C.begin(), C.end());
    std::vector<int>::const_iterator min_value = std::min_element(C.begin(), C.end());

    return (*max_value - *min_value); 
}
