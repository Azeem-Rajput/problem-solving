#include<iostream>
using namespace std;
int main()
{
    int st;
    cout<<"Enter a no of students=";
    cin>>st;
    int sb;
    cout<<"Enter number of subjects=";
    cin>>sb;
    int arr[st][sb];
    for(int i=0;i<st;i++)
    {
        for(int j=0;j<sb;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<st;i++)
    {
        for(int j=0;j<sb;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}