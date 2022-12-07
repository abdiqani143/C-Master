
#include <iostream>

int main(){
    // sales = $95,000;
    // sate tax = 4%;
    // county tax = 2%;

    double sales = 950000;
    std::cout<<"Sales: "<<sales<<std::endl;

    double state = .04;
    double  statetax = sales * state;
    std::cout<<"State Tax: "<<statetax<<std::endl;

    double county = .02;
    double  countytax = sales * county;
    std::cout<<"County Tax: "<<countytax<<std::endl;

    double  total = sales + countytax;
    std::cout<<"Total is: "<<total;


    return  0;
}