#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double t;
    cin>>t>>n;
    cout<<fixed<<setprecision(3)<<t/n<<endl;//remember this format" fixed + setpricision()"
    cout<<2*n;
    return 0;
}
