#include <iostream>
using namespace std;
int main() {
    char alph;

    cout << "Enter an alphabet: ";
    cin >> alph;

    int asciiValue = static_cast<int>(alph);// static_cast for explicit type conversion

    cout << "The ASCII value of " << alph << " is " << asciiValue << endl;

    return 0;
}
