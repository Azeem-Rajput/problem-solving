#include<iostream>
using namespace std;
void decreasing(int n)
{
    if(n==0) return;
    cout<<n<<endl;
    decreasing(n-1);
    return;
}
void increasing(int n)
{
    if(n==0) return;
    increasing(n-1);
    cout<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    decreasing(n);
    increasing(n);
    return 0;
}