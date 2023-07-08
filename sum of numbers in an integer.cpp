#include <iostream>
using namespace std;
int main()
{int a,temp=0,rem=0,sum=0;
    cout<<"Enter an integer : ";
    cin>>a;
    temp=a;
    while(temp>0)
    {
        rem=temp%10;
        sum+=rem;
        temp=temp/10;
    }
    cout<<"Sum of all number in the integer is "<<sum;
}