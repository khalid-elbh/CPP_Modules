#include "iter.hpp"
#include <cctype>
void add_one(int &a)
{
    a++;
}

template <class T>
void print_element(const T &a){
    std::cout << a << std::endl;
}

void touper(std::string &str){
   for (size_t i = 0; i < str.size(); i++){
        str[i] = toupper(str[i]);
  }
}


int main(){
    int arr[5] = {1, 2, 3, 4 ,5};
    iter(arr, 5, add_one);
    iter(arr, 5, print_element<int>);
    std::cout << "////////////////" << std::endl;
    const int arrr[3] = {2,8, 7};
    iter(arrr, 3, print_element<int>);
    std::string arrrr[3] = {"foo", "bar", "foobar"};
    iter(arrrr, 3 , touper);
    std::cout << "////////////////////" << std::endl;
    iter(arrrr, 3, print_element<std::string>);

}
