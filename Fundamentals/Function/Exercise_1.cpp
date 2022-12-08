#include <iostream>

using  namespace std;

// create function that receives two integer and return the maximum of the two.

int max(int first , int second) {

    if (first > second) {
        return (first > second) ? first: second;
    }
}
int main() {
    int larger = max(1,3);
    cout<<larger;
    return 0;
}

