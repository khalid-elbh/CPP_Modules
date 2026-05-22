#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span{
    private: 
        unsigned int N;
        std::vector<int> C;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int num);
        
        int shortestSpan()const;
        int longestSpan() const;
        template<typename iterator>
            void addrange(iterator begin, iterator end){
                while (begin != end) {
                    addNumber(*begin++);
                }
            }
};

#endif
