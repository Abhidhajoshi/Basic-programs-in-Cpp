#include <iostream>
using namespace std;


int main ()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    if(num%sum == 0)
        cout << num << " is a niven number";
    else
        cout << num << " is not a niven number";

    return 0;
}