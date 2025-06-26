#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[2][2]={1,7,10,12};
    int max=INT_MIN;
    int ind=0;
    int indi=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                ind=i;
                indi=j;
            }
        }
    }
    cout<<max<<" "<<ind<<" "<<indi;
    return 0;
}