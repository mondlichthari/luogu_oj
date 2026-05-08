#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char x='*';
    int n=3;
    for(int i=1;i<=n;i++)
    {
        cout<<setw(i+2)<<setfill(' ')<<string(2*i-1,x)<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        cout<<setw(i+2)<<setfill(' ')<<string(2*i-1,x)<<endl;
    }
    return 0;
}
