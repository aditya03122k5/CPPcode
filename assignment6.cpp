// Write a user defined function named cross_upper_triangle() which takes a two dimensional array A, with size N rows and N columns as argument and prints the triangle of the array.

// Eg: 

// * * * * *

// * * * *

// * * *

// * *

// *

// hint:

// First try to print N X N matrix of * 

// * * * * * 

// * * * * * 

// * * * * * 

// * * * * * 

// * * * * * 

 

// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

 

// Starter Code:

// #include<iostream>
// using namespace std;

// void cross_upper_triangle(int n)
// {
    
//     //Draw Pattern given in description for n x n dimensions
// }

// int main()
// {
//     return 0;
// }


#include <iostream>
using namespace std;

void cross_upper_triangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    cross_upper_triangle(n);
}