#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>
#include <cmath>

int main(){
    /// test with vector .
    std::vector<int> vec;
    for(int i = 0; i < 20; i++){
        vec.push_back(i * 2);
    }
    for (std::vector<int>::const_iterator it = vec.begin(); it < vec.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
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
    /// test with deque.
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
    for (std::deque<int>::const_iterator it = deq.begin(); it < deq.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
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
