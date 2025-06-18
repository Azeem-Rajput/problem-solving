#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a;
    cout<<"Enter first value=";
    cin>>a;
    int b;
    cout<<"Enter secand value=";
    cin>>b;
    swap(&a,&b);
    cout<<"The 1st value is=";
    cout<<a;
    cout<<endl;
    cout<<"The 2nd value is=";
    cout<<b;     
}
