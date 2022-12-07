
#include <iostream>
#include  <cmath>
int main(){

    // write a progran to calculate the eare of circular?;

    std::cout<<"Enter Radius ";
    double  radius;
    std::cin >> radius;
    const double pie = 3.14;
    double  area = pie * pow(radius,2);
    std::cout<<area;

    return  0;
}