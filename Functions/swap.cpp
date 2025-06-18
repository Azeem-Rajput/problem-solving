#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int m;
    cout<<"Enter a 2nd number=";
    cin>>m;
    n=n+m;
    m=n-m;
    n=n-m;
    cout<<"The first number is=";
    cout<<n;
    cout<<"The secand number is=";
    cout<<m;
    return 0;
}
