#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    int first = 0, second = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}
