#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "1 for addition" << endl;
    cout << "2 for subtraction" << endl;
    cout << "3 for multiplication" << endl;
    cout << "4 for division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Addition: ";
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

    case 2:
        cout << "Subtraction: ";
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case 3:
        cout << "Multiplication: ";
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case 4:
        cout << "Division: ";
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;

    default:
        cout << "Wrong input!";
        break;
    }
    return 0;
}