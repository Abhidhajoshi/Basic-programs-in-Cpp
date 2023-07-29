#include <iostream>
using namespace std;
int main()
{
    int a,i,fact=1;
    cout<<"enter the number whose factorial has to be calculated ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
cout<<"factorial of "<<a<<" is "<<fact;
}