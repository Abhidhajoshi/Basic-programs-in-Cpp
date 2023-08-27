#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter Second number:" <<endl;
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swapped numbers:" << std::endl;
    cout << "First number: " << a << std::endl;
    cout << "Second number: " << b << std::endl;
    return 0;
}

