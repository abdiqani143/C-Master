#include <iostream>

int main() {

    int grade;
    std::cout << "Enter the grade: ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout<<"Its A";
            break;
        case 'B':
            std::cout<<"Its B";
            break;
        case 'C':
            std::cout<<"Its C";
            break;
        case 'D':
            std::cout<<"Its D";
            break;

        default:
            std::cout<<"Its Failed";

    }

    return 0;
}
