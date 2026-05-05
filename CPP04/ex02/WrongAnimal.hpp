#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        std::string getType(void) const;
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &other);
        void makeSound(void) const;
};

#endif