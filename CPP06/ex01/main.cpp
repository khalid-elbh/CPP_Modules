#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data d;
    d.a = 5;
    d.b = 9.111;

    std::cout << "data address: " << &d << std::endl;
    std::cout << "member a: " << d.a << std::endl;
    std::cout << "member b: " << d.b << std::endl;

    uintptr_t raw = Serializer::serialize(&d);
    std::cout << "serialized: " << raw << std::endl;

    Data *ptr = Serializer::deserialize(raw);
    std::cout << "deserialized address: " << ptr << std::endl;

    if (ptr == &d)
        std::cout << "SUCCESS: pointers are equal" << std::endl;
    else
        std::cout << "FAILURE: pointers are not equal" << std::endl;

    std::cout << "member a: " << ptr->a << std::endl;
    std::cout << "member b: " << ptr->b << std::endl;

    return 0;
}
