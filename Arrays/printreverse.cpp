#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        cout<<"Enter a"<<" "<< i+1<<"number=";
        cin>>arr[i];
    }
    for(int j=4;j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;
}