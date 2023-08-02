#include <iostream>
using namespace std;
int main()
{int a,count=0;
    cout<<"enter the number to be checked ";
    cin>>a;
    for (int i=2;i<a;i++)
    {
        if(a%i==0)
        count=count+1;
    }
    if (count==0)
    cout<<a<<" is prime number";
    else
    cout<<a<<" is not prime number";
}