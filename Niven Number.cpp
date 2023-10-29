#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool isNivenNumber(int n) {
    int sum = sumOfDigits(n);
    return (n % sum == 0);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isNivenNumber(num)) {
        cout << num << " is a Niven number." << endl;
    } else {
        cout << num << " is not a Niven number." << endl;
    }
    return 0;
}

