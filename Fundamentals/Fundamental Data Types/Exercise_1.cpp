
#include <iostream>
#include <ctime>
int main(){
    // write the program for rolling dice?

    const short  min = 1;
    const short max = 6;
    srand(time(0));
    short firt = (rand() % (min - max + 1 )) + min;
    short second  = (rand() % (min - max + 1 )) + min;
    std::cout<<firt<<","<<second;


    return  0;
}