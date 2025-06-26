#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    int p=a*power(a,b-1);
    return p;
}
int main()
{
    int a;
    cout<<"Enter a number=";
    cin>>a;
    int b;
    cout<<"Enter a power=";
    cin>>b;
    int ans=power(a,b);
    cout<<ans;
    return 0;
}