#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,2,5};
    // for(int j=0;j<=4;j++)
    // {
    //     cout<<"Enter a"<<" "<<j+1<<" "<<"number=";
    //     cin>>arr[j];
    // }
    for(int k=0,i=4;k<=i;k++,i--)
    {
        if(k==i) cout<<"ok";
        if(arr[k]==arr[i])
        {
            cout<<"palindrome";
            break;
        }
        else
        {
            cout<<"not palindrome";
            break;
        }
    }
    return 0;
}