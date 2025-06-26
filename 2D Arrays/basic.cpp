#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter a no of rows=";
    cin>>r;
    int c;
    cout<<"Enter  no of column=";
    cin>>c;
    int arr[r] [c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}