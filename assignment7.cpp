// Write a program in C++ to print all permutations of a given string using pointers.

// Test Data:

// String to print the permutations : abcd

// Expected Output :

// The permutations of the string are :

// abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc

#include <iostream>
#include <cstring>
using namespace std;

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        cout << str << "  ";
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[] = "abcd";
    int n = strlen(str);
    cout << "The permutations of the string are :\n\n";
    permute(str, 0, n - 1);
    cout << endl;
    return 0;
}

