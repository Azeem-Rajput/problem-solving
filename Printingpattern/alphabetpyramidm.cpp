#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++)
    {
        char ch=(char)(i+64);
        cout<<ch;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=nst;j++)
        {
            char ch=(char)(a+64);
            cout<<ch;
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
            a++;
        }
        for(int j=1;j<=nst;j++)
        {
            char ch=(char)(a+64);
            cout<<ch;
            a++;
        }
        cout<<endl;
        nst--;
        nsp+=2;
    }
}