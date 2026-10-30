#include <iostream>
using namespace std;

int main() 
{
    //input
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    //condition
    if (num <= 0) {
        cout << "It is a non-positive number\n";
    } else if (num < 9) {
        cout << "The number is Positive and has 1 Digit\n";
    } else if (num < 99) {
        cout << "The number is Positive and has 2 Digits\n";
    } else if (num < 999) {
        cout << "The number is Positive and has 3 Digits\n";
    } else if (num < 9999) {
        cout << "The number is Positive and has 4 Digits\n";
    }
    
    //if user input 5 or greater numbers. Display Invalid status
    else {
        cout << "\nInvalid Input! Please Try Again.\n";
    }
    return 0;
}

