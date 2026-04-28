#include<iostream>
using namespace std;

int main()
{
    cout << "Enter a number of gallons: ";
    int number_of_galons;
    cin >> number_of_galons;

    double equivalent_in_cubic_feet = number_of_galons / 7.481;

    cout << "Equivalent in cubic feet = " << equivalent_in_cubic_feet;
    return 0;
}