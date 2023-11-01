#include <iostream>
using namespace std;
// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Fibonacci Sequence for the first " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
