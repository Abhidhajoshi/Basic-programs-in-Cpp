#include <iostream>
using namespace std;
int main()
{ int a,b,temp=0;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"Before swapping the value of a and b are "<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping the value of a and b are "<<a<<" "<<b;
}