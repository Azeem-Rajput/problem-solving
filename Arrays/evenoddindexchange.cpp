#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5];
     for(int j=0;j<=4;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=0;i<=4;i++)
    {
        if( i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
        cout<<arr[i]<<endl;
    }
  
    return 0;
}