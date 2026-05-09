#include<iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    int num=int(n*10+0.5);
    int reverse=0;
    while(num)
    {
        reverse=num%10+10*reverse;
        num/=10;
    }
    cout<<reverse/1000.0;
    return 0;
}
