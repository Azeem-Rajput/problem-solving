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
    int max=INT_MIN;
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
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
            if(max<sum)
            max=sum;
            
        }
        cout<<"The sum is="<<sum<<endl;
    }
    cout<<"The gretest is"<<max;
    return 0;

}