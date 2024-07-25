#include <iostream>
using namespace std;
class Cylinder
{
private:
    double height;
    double radius;
    double volume;

public:
    // Parameterless constructor
    Cylinder(void)
    {
        cout << "Parameterless constructor called" << endl;
    }

    // Parameterized constructor
    Cylinder(double height, double radius)
    {
        this->height = height;
        this->radius = radius;
    }

    // Function to set height
    void set_height(const double height)
    {
        this->height = height;
    }
    // Function to set radius
    void set_radius(const double radius)
    {
        this->radius = radius;
    }

    // Function to calucalte volume of cylinder
    void calculate_volume(void)
    {
        const double pi = 3.14159265359;
        this->volume = pi * this->radius * this->radius * this->height;
    }

    // Function to get the value of volume
    double get_volume(void)
    {
        return this->volume;
    }
};

int main()
{
    // // This code is written to work with parameterless constructor
    // Cylinder cylinder;
    // double height;
    // double radius;
    // cout << "Height   :   ";
    // cin >> height;
    // cout << "Radius   :   ";
    // cin >> radius;
    // cylinder.set_height(height);
    // cylinder.set_radius(radius);
    // cylinder.calculate_volume();
    // double volume = cylinder.get_volume();
    // cout << "Volume   :   " << volume << endl;

    // This code is written to work with parameterized constructor
    Cylinder c2(10, 8);
    c2.calculate_volume();
    double volume_ = c2.get_volume();
    cout << "Volume   :   " << volume_ << endl;

    return 0;
}