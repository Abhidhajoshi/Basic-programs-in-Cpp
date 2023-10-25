//Program to find first n prime numbers

#include <iostream>
using namespace std;
int main()
{  
    int n,temp=0,flag,i,k;
cout<<"enter the number of prime numbers to be printed: ";
cin>>k;
n=2;
while (temp<k)    //for counting the number of prime numbers printed
{
    flag=0;
    for(i=2;i<=n-1;i++)
    {
        if (n%i==0)    //for checking whether a number is prime or not
        flag=1;
    }
    if (flag==0)
    {
      cout<<n<<",";
      temp++;
    }
    n++;         //for increasing the test case
    }
 return 0;
}
