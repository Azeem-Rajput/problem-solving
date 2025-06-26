#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int m;
    cout<<"Enter a number of column=";
    cin>>m;
    int index=-1;
    int maxcount=0;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        
        }
    }
    for(int i=0;i<n;i++)
    {
        int max=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            max++;   
        }
        if(maxcount<max)
        {
        maxcount=max;
        index=i;
        }
    }
    cout<<maxcount<<" "<<index;
    return 0;

}