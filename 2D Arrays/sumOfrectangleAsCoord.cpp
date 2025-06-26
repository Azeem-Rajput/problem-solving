#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number of rows=";
    cin>>n;
    int m;
    cout<<"Enter a number of column=";
    cin>>m;
    int sum=0;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        
        }
    }
    for(int i=1;i<=2;i++)
    {
        for(int j=2;j<=3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"The sum is="<<sum;
    return 0;

}