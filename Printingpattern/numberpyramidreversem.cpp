#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int nsp=1;
    int nst=n;
    int midl=n/2;
    for(int l=1;l<=(2*n)+1;l++)
    {
        if(l<=midl)
        l++;
        else
        l--;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
            a++;
        }
        for(int j=1;j<=nst;j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
}