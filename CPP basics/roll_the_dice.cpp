#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    // Declaring 2 variables to set the minimum and maximum values
    const short minimum_value = 1;
    const short maximum_value = 6;

        srand(time(0));

    // Setting a random value for dice 1
    short first_dice = rand() % (maximum_value - minimum_value + 1) + minimum_value;

    // Setting a random value for dice 2
    short second_dice = rand() % (maximum_value - minimum_value + 1) + minimum_value;

    // Printing the values of dice
    cout << first_dice << "," << second_dice << endl;
    return 0;
}