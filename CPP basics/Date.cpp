#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Count store the number of day in the week
    int count;

    // This function is used to initialize date to 0
    void init_Date(void)
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    // This function is used to accept the date from the user
    void accept_record(void)
    {
        cout << "Day          :   ";
        cin >> this->day;
        cout << "Month        :   ";
        cin >> this->month;
        cout << "Year         :   ";
        cin >> this->year;
    }

    // This function is used to print the date
    void print_record(void)
    {
        cout << "-------------" << endl;
        cout << "Day          :   " << this->day << endl;
        cout << "Month        :   " << this->month << endl;
        cout << "Year         :   " << this->year << endl;
    }

    // This function is used to initialize the number of day
    void add_number_of_days(int count)
    {
        this->count = count;
    }

    // This function is used to return the name of day of week
    string day_of_week(void)
    {
        string day;
        switch (this->count)
        {
        case 1:
            day = "Monday";
            return day;
            break;
        case 2:
            day = "Tuesday";
            return day;
            break;
        case 3:
            day = "Wednesday";
            return day;
            break;
        case 4:
            day = "Thursday";
            return day;
            break;
        case 5:
            day = "Friday";
            return day;
            break;
        case 6:
            day = "Saturday";
            return day;
            break;
        case 7:
            day = "Sunday";
            return day;
            break;
        }
    }
};
int main()
{
    // Declaring object of date class
    Date d1;

    int number_of_day;
    d1.init_Date();
    d1.accept_record();
    cout << "Number of day:   ";
    cin >> number_of_day;
    d1.add_number_of_days(number_of_day);
    d1.print_record();
    string day = d1.day_of_week();
    cout << "Day name     :   " << day << endl;
    return 0;
}