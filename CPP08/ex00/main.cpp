#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <cmath>

int main(){
    std::vector<int> vec;
    for(int i = 0; i < 20; i++){
        vec.push_back(i * 2);
    }
    try{        
        std::cout << *easyfind(vec, 15) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{        
        std::cout << *easyfind(vec, 2) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::deque<int> deq;
    for (int num = 2; num <= 50; num++) {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            deq.push_back(num);
    }
    try{        
        std::cout << *easyfind(deq, 9) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{        
        std::cout << *easyfind(deq, 29) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }   

}
