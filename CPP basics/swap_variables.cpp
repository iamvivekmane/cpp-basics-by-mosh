#include <iostream>
using namespace std;

int main()
{
    // Declaring 2 variables
    int number1;
    int number2;

    // Taking input from the user for two numbers
    cout << "Enter the value of number 1" << endl;
    cin >> number1;
    cout << "Enter the value of number 2" << endl;
    cin >> number2;

    // Printing two numbers before swapping
    cout << "The value of number 1 before swapping is " << number1 << endl;
    cout << "The value of number 2 before swapping is " << number2 << endl;
    cout << "------------------------------------------" << endl;

    // Swapping two numbers with a temporary variable
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;

    // Printing two numbers after swapping
    cout << "The value of number 1 after swapping is " << number1 << endl;
    cout << "The value of number 2 after swapping is " << number2 << endl;

    return 0;
}