#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstddef>
#include <stdexcept>
template <typename T>
class Array{
    private:
        T *ar;
        unsigned int s;
    public:
        Array():ar(NULL), s(0){
            std::cout << "default constructor is called ." << std::endl;
        }
        Array(unsigned int n): s(n){
            std::cout << "parameterized constructor is called ." << std::endl;
            ar = new T[n]();
        }
        Array(const Array &other){
            std::cout << "copy constructor is called." << std::endl;
            s = other.s;
            if (other.ar)
            {
                ar = new T[s]();
                for(unsigned int i = 0; i < s; i++){
                    this->ar[i] = other.ar[i]; 
                }
            }
            else {
                ar = NULL;
            }
        }
        Array &operator=(const Array &other){
            std::cout << "copy assignment operator is called ." << std::endl;
            if (this != &other){
                this->s = other.s;
                delete[] ar;
                if (other.ar)
                {
                    ar = new T[s]();
                    for(unsigned int i = 0; i < s; i++){
                        this->ar[i] = other.ar[i]; 
                    }
                }
                else {
                    ar = NULL;
                } 
            }
            return (*this);
        }
        ~Array(){
            delete[] ar;
        }
        T &operator[](unsigned int i){
            if (i >= s)
                throw std::out_of_range("Index out of range");
            return ar[i];
        }
        unsigned int size()const{
            return (this->s);
        }
};

#endif
