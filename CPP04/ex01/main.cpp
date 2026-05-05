#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int num = 10;
    Animal *animals[num];
    std::cout << "creating animals" << std::endl;
    for (int i = 0; i < num; i++){
        if (i < num / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "deleting animals" << std::endl;
    for (int i = 0; i < num ; i++){
        delete animals[i];
    }
    return 0;
}