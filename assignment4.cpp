// Write a C++ program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

// Input:
// 375


// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int notes[] = {2000, 500, 100, 50, 20, 10, 5};
    int countNotes[sizeof(notes)/sizeof(notes[0])];   // Array to store the count of each note
    for (int i = 0; i < sizeof(notes)/sizeof(notes[0]); i++) {
        countNotes[i] = amount / notes[i];
        amount %= notes[i];
        cout << countNotes[i] << " Note(s) of " << notes[i] << ".00" << endl;
    }

    return 0;
}