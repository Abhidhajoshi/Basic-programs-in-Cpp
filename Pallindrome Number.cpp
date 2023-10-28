#include <iostream>
using namespace std;
int main()
{
    int a,rem=0,temp=0,rev=0;
    cout<<"enter a number to be checked : ";
    cin>>a;
    temp=a;
    while(temp>0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==a)
    cout<<a<<" is a Pallindrome number";
    else
    cout<<a<<" is not Pallindrome number";
}