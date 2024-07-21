#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declaring radius and taking user input
    double radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;

    // Calculating area of circle
    double area = M_PI * (radius * radius);

    // Printing area of cirlce
    cout << "The area of the circle is " << area << endl;
    return 0;
}