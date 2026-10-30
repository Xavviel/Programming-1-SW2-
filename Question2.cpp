#include <iostream>
using namespace std;

int main() 
{
    float num1, num2, result;
    int choice;

   do {

    cout << "\n=====Choose an Operator=====\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";

    cout << "Enter Your Choice: ";
    cin >> choice;

    //Process and Choice
    switch (choice) {
        case 1:
        cout << "\n=====ADDITION=====\n";
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;

            result = num1 + num2;
            cout << "\nResult of the Operation: " << result << endl; //output
            break;

        case 2:
        cout <<"\n=====SUBTRACTION=====\n";
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;

            result = num1 - num2;
            cout << "\nResult of the Operation: " << result << endl; //output
            break;

        case 3:
        cout << "\n=====MULTIPLICATION=====\n";
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;

            result = num1 * num2;
            cout << "\nResult of the Operation: " << result << endl; //output
            break;

        case 4:
        cout << "\n=====DIVISION=====\n";
        cout << "Enter Number 1: ";
        cin >> num1;

        cout << "Enter Number 2: ";
        cin >> num2;

            if (num2 != 0) {
                result = num1 / num2;
                cout << "\nResult of the Operation: " << result << endl; //output
            }else {
                cout << "\nError! Cannot divide by zero.\n";
            }
            break;

        default: //default message if input is wrong
            cout << "\nInvalid Input!\n";
    } 

   } while (choice < 1 || choice > 4);

    return 0;
}
