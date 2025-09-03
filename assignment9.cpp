// Declare an array of function pointers. The function pointers should point to a function accepting two integers and returning an integer.

// Implement the following functions: int fnAdd(int,int);

// int fnMultiply(int,int);

// int fnDivide(int,int); int fnSubtract(int,int);

// Initialize the array with the address of these four functions and call the functions using the function pointers in the array.

// Hint: Declare an array of function pointers having the same prototype as: int (*fnptr[4])(int,int);

// Assign the corresponding fnAdd, fnMultiply, fnDivide and fnSubtract function‟s addresses to the elements of the function pointer array

 

// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

// Starter Code:

// #include<iostream>
// using namesapace std;
// int fnAdd(int,int);
// int fnMultiply(int,int);
// int fnDivide(int,int); 
// int fnSubtract(int,int);
// int fanAdd(int,int)
// {
    
// }a
// int fnMultiply(int,int)
// {
    
// }
// int fnDivide(int,int)
// {
    
// }
// int fnSubtract(int,int)
// {
    
// }
// int fnAdd(int,int)
// {

// }
// int main()
// {
// return 0;
// }

#include <iostream>
using namespace std;

int fnAdd(int a, int b) {
    return a + b;
}
int fnMultiply(int a, int b) {
    return a * b;
}
int fnDivide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
}
int fnSubtract(int a, int b) {
    return a - b;
}
int main() {
    // Array of function pointers
    int (*fnptr[4])(int, int) = {fnAdd, fnMultiply, fnDivide, fnSubtract};

    int x = 20, y = 10;

    cout << "Addition: " << fnptr[0](x, y) << endl;      // Calls fnAdd
    cout << "Multiplication: " << fnptr[1](x, y) << endl; // Calls fnMultiply
    cout << "Division: " << fnptr[2](x, y) << endl;       // Calls fnDivide
    cout << "Subtraction: " << fnptr[3](x, y) << endl;    // Calls fnSubtract

    return 0;
}
