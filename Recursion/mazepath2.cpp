#include<iostream>
using namespace std;
int maze2(int n,int m)
{
    int rightward=0;
    int downward=0;
    if(n==1 && m==1) return 1;
    if(n==1)
    {
        rightward +=maze2(n,m-1);
    }
    if(m==1)
    {
        downward +=maze2(n-1,m);
    }
    if(n>1 && m>1)
    {
        rightward +=maze2(n,m-1);
        downward +=maze2(n-1,m);
    }
    int total=rightward+downward;
    return total;
}
int main()
{
    int n;
    cout<<"Enter a number of row=";
    cin>>n;
    int m;
    cout<<"Enter a number of column=";
    cin>>m;
    int ans=maze2(n,m);
    cout<<ans;
    return 0;
}