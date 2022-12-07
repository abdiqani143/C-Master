
#include <iostream>

int main(){
    // write a program to convert a temperature from fahrenheit to celsius?

    std::cout<<"Enter fahrenheit";
    int fahrenheit;
    std::cin >> fahrenheit;
    double  celsius = (fahrenheit - 32) / 1.8;
    std::cout<<celsius;


    return  0;
}