#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    num=n;
    int reverse=0;
    while(num)
    {
        reverse=num%10+10*reverse;
        num/=10;
    }
    cout<<reverse;
    return 0;
}
