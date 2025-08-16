// Input Format

// A single integer denoting n.

// Constraints : 1 <= n <= 9

// Output Format

// If 1 <= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print "Greater than 9" instead.

// Sample Input : 5

// Sample Output : five

// Explanation : five is the English word for the number 5.

// Sample Input : 44

// Sample Output : Greater than 9

// Explanation : n = 44 is greater than 9, so we print Greater than 9.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    switch (n) {
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
        default: cout << "Greater than 9"; break;
    }
    
    cout << endl;
    return 0;
}