#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no of rows and column=";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int tem=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=tem;
        }
        
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}