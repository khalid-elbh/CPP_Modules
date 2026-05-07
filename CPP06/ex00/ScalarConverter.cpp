#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &other){
    (void)other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    (void) other;
    return(*this);
}
ScalarConverter::~ScalarConverter(){}
void ScalarConverter::convert(std::string str){
    if (str.length() < 1){
        std::cout << "invalid input" << std::endl;
        return;
    }
    if (str.length() == 1 && !std::isdigit(str[0]))
    { 
        std::cout << "char: '" << str[0] << "'"<< std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]);
        return;
    }
    char *rem;
    double value = strtod(str.c_str(), &rem);
    if (*rem && (*rem != 'f' || *(rem + 1))){
        std::cout << "invalid input" << std::endl;
        return;
    }
    if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
        std::cout << "char: " << "impossible" << std::endl;
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if(std::isnan(value) || std::isinf(value) || value > INT_MAX || value < INT_MIN)
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << value << std::endl;
}
