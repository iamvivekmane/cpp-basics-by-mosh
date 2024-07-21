#include <iostream>
using namespace std;

int main()
{
    // Declaring farenheit variable and taking user input
    double fahrenheit;
    cout << "Enter the temprature in farenheit" << endl;
    cin >> fahrenheit;

    // Calculating the calcius value
    double calcius = (fahrenheit - 32) * 5 / 9;

    // Printing the farenheit value
    cout << "The temprature in calcius is " << calcius << endl;

    return 0;
}