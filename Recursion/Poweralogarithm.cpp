#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        return power(a,b/2)*power(a,b/2);
    }
    else
    {
        return power(a,b/2)*power(a,b/2)*a;
    }
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