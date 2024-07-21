#include <iostream>
using namespace std;

int main()
{
    // Declaring sales variable and taking user input for the sales
    double sales;
    cout << "Enter the sales" << endl;
    cin >> sales;

    // declaring and initializing the state tax and country tax rate
    double state_tax_rate = .04;
    double country_tax_rate = .02;

    // Calculating the state tax, country tax, total tax
    double state_tax_amount = sales * state_tax_rate;
    double country_tax_amount = sales * country_tax_rate;
    double total_tax_amount = state_tax_amount + country_tax_amount;

    // Printing the state tax, country tax, total tax
    cout << "The state tax for the sales of $ " << sales << " is $" << state_tax_amount << endl;
    cout << "The country tax for the sales of $ " << sales << " is $" << country_tax_amount << endl;
    cout << "The total tax for the sales of $ " << sales << " is $" << total_tax_amount << endl;

    return 0;
}