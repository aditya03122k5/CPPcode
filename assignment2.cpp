// Write a C++ program to convert specified days into years, weeks and days. Note: Ignore leap year.

// Input :
// Number of days : 1329


// Expected Output :
// Years: 3 Weeks: 33 Days: 3

#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Number of days: ";
    cin >> days;
    int years = days / 365;
    days %= 365;
    int weeks = days / 7;
    days %= 7;
    cout << "years: " << years << "Weeks: " << weeks << "Days: " << days << endl;
    return 0;
}