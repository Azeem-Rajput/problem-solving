#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int nsp=1;
    int nst=n;
    for(int l=1;l<=(2*n)+1;l++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=nst;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
}