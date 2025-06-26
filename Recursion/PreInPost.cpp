#include<iostream>
using namespace std;
void preinpost(int n)
{
    if(n==0) return;
    cout<<"Pre"<<n<<endl;
    preinpost(n-1);
    cout<<"In"<<n<<endl;
    preinpost(n-1);
    cout<<"Post"<<n<<endl;
    return;
}
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    preinpost(n);
    return 0;
}