#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << "------- animal test --------" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "------- wronganimal test --------" << std::endl;
    const WrongAnimal *wrongmeta = new WrongAnimal();
    const WrongAnimal *wrongi = new WrongCat();
    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound();
    wrongmeta->makeSound();
    delete wrongmeta;
    delete wrongi;
    return 0;
}