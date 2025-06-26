#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[4];
    int min=INT_MAX;
    for(int j=0;j<=3;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=0;i<=3;i++)
    {
        if(min>arr[i])
        {
        min=arr[i];
        }
    }
    cout<<min;
  
    return 0;
}