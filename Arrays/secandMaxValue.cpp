#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5];
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int j=0;j<=4;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=0;i<=4;i++)
    {
        if(max<arr[i])
        {
        max=arr[i];
        }
    }
    for(int k=0;k<=4;k++)
    {
        if(arr[k]!=max && smax<arr[k])
        {
            smax=arr[k];
        }
    }
    cout<<smax;
    return 0;
}