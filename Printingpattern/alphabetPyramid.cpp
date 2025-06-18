#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int alpGap=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int b=1;
         for(int k=1;k<=i+alpGap;k++)
         {
            int alphabet=b+64;
            char ch=(char)alphabet;
            cout<<ch;
            b++;
         }
         alpGap=alpGap+1;
        cout<<endl;
    }
}