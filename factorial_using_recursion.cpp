#include <iostream>
using namespace std;
int fact(int n)
{
    if (n<=1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int i;
    cout<<"enter the value till factorial should be printed : ";
    cin>>i;
    cout<<"factorial of "<<i<<" is "<<fact(i);
}