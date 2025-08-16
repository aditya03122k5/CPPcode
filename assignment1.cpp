// Write a C++ program to compute the perimeter and area of a rectangle with the given length and breadth.

// Input:

// 7 5

// [where length = 7, breadth = 5]

// Output:

// Perimeter = 24; Area = 35

#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cin >> length;
    cin >> breadth;
    int perimeter = 2 * (length + breadth);
    int area = length * breadth;
    cout << "Perimeter = " << perimeter << "; Area = " << area << endl;
    return 0;
}