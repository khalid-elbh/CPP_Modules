#include "replace.hpp"



int main(int ac, char **av){
if (ac != 4)
{
    std::cerr << "Error: invalid number of arguments.\n";
    std::cerr << "Usage: ./replace <filename> <s1> <s2>\n";
    return 1;
}
    if(replace(av[1], av[2], av[3]))
        return 1;
}