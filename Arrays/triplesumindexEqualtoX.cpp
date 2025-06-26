#include<iostream>
using namespace std;
int main()
{
    int arr[8];
    int index=7;
    int x=12;
    int totaltriplets=0;
    for(int j=0;j<=index;j++)
    {
        cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
        cin>>arr[j];
    }
    for(int i=0;i<=index;i++)
    {
        for(int k=i+1;k<=index;k++)
        {
            for(int l=k+1;l<=index;l++)
            {
                if(arr[i]+arr[k]+arr[l]==x)
                {
                    totaltriplets++;
                    cout<<arr[i]<<","<<arr[k]<<","<<arr[l]<<endl;
                }
            }
        }
    }
    cout<<totaltriplets;
    return 0;
}