#include <iostream>

using  namespace std;

// Function Declaring (Function Prototyping)
void great(string name);

int main() {
    great("Abdiqani");
    return 0;
}

// Function Definition
void great(string name){
    cout<<"Hello "<<name;
}
