#include <iostream>

int main() {

    int month;
    std::cout << "Enter the month: ";
    std::cin >> month;
    if (month == 1){
        std::cout << "January";
    }
    else if(month == 2){
        std::cout<<"February";
    }
    else if(month == 3){
        std::cout<<"March";
    }
    else if(month == 4){
        std::cout<<"April";
    }
    else if(month == 5){
        std::cout<<"May";
    }
    else if(month == 6){
        std::cout<<"June";
    }
    else if(month == 7){
        std::cout<<"July";
    }
    else if(month == 8){
        std::cout<<"August";
    }
    else if(month == 9){
        std::cout<<"September";
    }
    else if(month == 10){
        std::cout<<"October";
    }
    else if(month == 11){
        std::cout<<"November";
    }
    else if(month == 11){
        std::cout<<"December";
    }
    else{
        std::cout<<"Only 12 Month enter";
    }

    return 0;
}
