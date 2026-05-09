#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char a;
    cin>>a;
    cout<<setw(3)<<setfill(' ')<<string(1,a)<<endl;
    cout<<setw(4)<<setfill(' ')<<string(3,a)<<endl;
    cout<<string(5,a);
    return 0;
}
