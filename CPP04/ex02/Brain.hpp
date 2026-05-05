#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain{
    public:
    std::string ideas[100];
    Brain(void);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
};

#endif