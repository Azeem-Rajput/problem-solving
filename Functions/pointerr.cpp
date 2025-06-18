#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int* x=&a;
    int** y=&x;
    int*** z=&y; 
    cout<<*x;
    cout<<endl;
    cout<<**y;
    cout<<endl;
    cout<<***z;
}