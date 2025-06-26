#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={1,7,2,5};
    int brr[2][2]={4,5,2,1};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]+brr[i][j];
        
        }
        cout<<endl;
    }
}