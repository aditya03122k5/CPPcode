// Write a C++ program to print a binomial coefficient table.

// Input:

// 10

// Output:

// Mx 0 1 2 3 4 5 6 7 8 9 10
// ----------------------------------------------------------
// 0 1
// 1 1 1
// 2 1 2 1
// 3 1 3 3 1
// 4 1 4 6 4 1
// 5 1 5 10 10 5 1
// 6 1 6 15 20 15 6 1
// 7 1 7 21 35 35 21 7 1
// 8 1 8 28 56 70 56 28 8 1
// 9 1 9 36 84 126 126 84 36 9 1
// 10 1 10 45 120 210 252 210 120 45 10 1

// ----------------------------------------------------------

#include <iostream>
using namespace std;

long long binomialCoeff(int n, int k) {
if (k > n) return 0;
if (k == 0 || k == n) return 1;
long long res = 1;
if (k > n - k) k = n - k;
for (int i = 0; i < k; i++) {
res *= (n - i);
res /= (i + 1);
}
return res;
}

int main() {
int n;
cout << "Enter the value of n: ";
cin >> n;


cout << "Mx ";
for (int i = 0; i <= n; i++)
cout << i << " ";
cout << "\n" << endl;


for (int i = 0; i <= n; i++) {
cout << i << " ";
for (int j = 0; j <= i; j++) {
cout << binomialCoeff(i, j) << " ";
}
cout << endl;
}

cout << "\n" << endl;
return 0;
}
