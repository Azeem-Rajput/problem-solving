#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1 || n==0) return 1;
    int ret=n+sum(n-1);
    return ret;
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int fact=sum(n);
    cout<<fact;
    return 0;
}