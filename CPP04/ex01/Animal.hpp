#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        std::string getType(void) const;
        Animal(void);
        Animal(const Animal &other);
        virtual ~Animal();
        Animal &operator=(const Animal &other);
        virtual void makeSound(void) const;
};

#endif