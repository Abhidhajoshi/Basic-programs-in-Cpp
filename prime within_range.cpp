#include <iostream>
using namespace std;
bool is_prime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}
void within_range(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int start,end;
    cout<<"enter the starting range ";
    cin>>start;
    cout<<"enter the starting range ";
    cin>>end;
    within_range(start, end);
    return 0;
}
