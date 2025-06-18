#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    fact=fact*i;    
    return fact; 
}
int combination(int n,int r)
{
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    cout<<"enter number of lines=";
    cin>>n;
    int spc=n;
    for(int i=0;i<=n;i++)
    {
        for(int k=1;k<=spc;k++)
        {
            cout<<" ";
        }
        spc--;
        for(int j=0;j<=i;j++)
        {
            int icj=combination(i,j);
            cout<<icj;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
