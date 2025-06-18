#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
        return fact;
    }
}
int permutation(int n,int r)
{
    int npr=factorial(n)/(factorial(n-r));
    return npr;
}
int main()
{
    int n;
    cout<<"Enter a value of n=";
    cin>>n;
    int r;
    cout<<"Enter a value of r=";
    cin>>r;
    int pr=permutation(n,r);
    cout<<pr;
}