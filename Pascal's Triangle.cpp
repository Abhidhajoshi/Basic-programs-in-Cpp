#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            int coef = factorial(i) / (factorial(j) * factorial(i - j));
            cout << coef << "   "; 
        }

        cout <<endl;
    }
    return 0;
}
