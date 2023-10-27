#include <iostream>
using namespace std;
int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    // Initialize an array to store counts for each digit (0 to 9)
    int digitCounts[10] = {0};

    // Ensure the number is non-negative
    if (num < 0) {
        num = -num;
    }

    // Count the digits in the number
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        digitCounts[digit]++; // Increment the count for that digit
        num /= 10; // Remove the last digit
    }

    // Display the counts
    cout << "Digit counts in the number:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << ": " << digitCounts[i] << " times\n";
    }

    return 0;
}
