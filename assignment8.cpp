// Write a program in C++ to sort an array using Pointer.

// Input : First element will be the total no.of elements to store in the array and the following numbers will the elements of the array that needs to be sorted.

// Output : Sorted array

// Test Data :

// 5 25 45 89 15 82

// Expected Output:

// 15 25 49 82 89

#include <iostream>
using namespace std;

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap the elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr; // Free allocated memory
    return 0;
}