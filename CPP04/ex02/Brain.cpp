#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "default constructor is called for Brain" << std::endl;
}
Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
    std::cout << "copy constructor is called for Brain" << std::endl;
}
Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "copy assignment operator is called for Brain" << std::endl; 
    return *this;
}
Brain::~Brain(){
    std::cout << "Destructor is called for Brain" << std::endl;
}
