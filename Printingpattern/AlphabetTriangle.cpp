#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int a=1;
        for(int k=1;k<=i;k++)
        {
            int alphabets=a+64;
            char ch=(char)alphabets;
            cout<<ch;
            a++;
        }
        cout<<endl;
    }
}