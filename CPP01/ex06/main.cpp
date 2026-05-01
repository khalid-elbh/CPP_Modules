#include "Harl.hpp"

int main (int ac, char **av){
    if (ac != 2)
        return 1;
    std::string option(av[1]);
    Harl complains;
    std::string options[4] = {
        "ERROR",
        "WARNING",
        "INFO",
        "DEBUG"
    };
    int i = 0;
    while (options[i] != option && i < 4){
        i++;
    }
    switch (i){
        case 0:
            complains.complain("ERROR");
            break;
        case 1:
            complains.complain("WARNING");
            complains.complain("ERROR");
            break;
        case 2:
            complains.complain("INFO");
            complains.complain("WARNING");
            complains.complain("ERROR");
            break;
        case 3:
            complains.complain("DEBUG");
            complains.complain("INFO");
            complains.complain("WARNING");
            complains.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}