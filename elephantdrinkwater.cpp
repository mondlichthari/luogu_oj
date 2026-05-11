#include<iostream>
using namespace std;
int main()
{
    int h,r;
    cin>>h>>r;
    double v=3.14*h*r*r;
    int n=20000/v+1;
    cout<<n;
    return 0;
}
