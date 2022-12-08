#include <iostream>

using  namespace std;

// Global Variable
double  taxRate = .2;
const double calculateTax(int sales)
{
    return  sales * taxRate;
}

int main() {
    // Local Variable

    int sales = 10000;

    double tax = calculateTax(sales);
    cout<<tax;
    return 0;
}

