#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Using ternary operator
    (num % 2 == 0) ? cout << "Even Number" 
                     : cout << "Odd Number";

    return 0;
}