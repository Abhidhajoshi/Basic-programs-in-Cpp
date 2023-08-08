#include <iostream>
using namespace std;
int main()
{int i,temp=0,sum=0,rem=0;
    cout<<"enter a number ";
    cin>>i;
    temp=i;
    while(temp>0)
    {
        rem=temp%10;
        sum=(rem*rem*rem)+sum;
        temp=temp/10;
    }
    if(sum==i)
    cout<<i<<" is Armstrong number";
    else
    cout<<i<<" is not Armstrong number";
}

