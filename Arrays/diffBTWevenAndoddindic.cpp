#include<iostream>
using namespace std;
int main()
{
    int arr[5];
     for(int j=0;j<=4;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]%2==0)
        {
            evensum=evensum+arr[i];
        }
        else
        {
            oddsum=oddsum+arr[i];
        }
    }
    int difference=evensum-oddsum;
    cout<<difference;
    return 0;
}