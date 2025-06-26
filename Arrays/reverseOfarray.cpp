#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[4];
    int brr[4];
    for(int j=0;j<=3;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=3;i>=0;i--)
    {
        brr[i]=arr[i];
        cout<<brr[i];
    }
    
  
    return 0;
}