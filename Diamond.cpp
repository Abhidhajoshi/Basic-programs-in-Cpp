#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Please enter an odd number for a better diamond pattern." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
