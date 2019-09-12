/*
 * Write a C++ program to check if the given year is a leap year.
 * Hint -> a leap year is divisible by 4.
 */
#include <iostream>
using namespace std;
 
int main()
{
    int year;
 
    cout << "Enter the year in yyyy format : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
}
