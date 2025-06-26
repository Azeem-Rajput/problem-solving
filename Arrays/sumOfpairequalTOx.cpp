#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int index=4;
    int x=12;
    int totalpair=0;
    for(int j=0;j<=4;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=0;i<=index;i++)
    {
        for(int k=i+1;k<=index;k++)
        {
            
            if(arr[i]+arr[k]==x)
            {
                totalpair++;
                cout<<arr[i]<<","<<arr[k]<<endl;
            }
        }
    }
    cout<<totalpair;
    return 0;
}