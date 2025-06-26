#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int x=4;
     for(int j=0;j<=4;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    int numbers=0;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>x)
        {
            numbers++;
        }
    }
    cout<<numbers;
    return 0;
}