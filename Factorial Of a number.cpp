// Problem # 17: Write a program in C++ to find the factorial of a number.
#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
