#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int nsp=0;
    int nst=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=nst;k++)
        {
            cout<<"*";
        }
        nsp+=1;
        nst-=1;
        cout<<endl;
    }
}