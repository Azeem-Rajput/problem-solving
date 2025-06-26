#include<iostream>
using namespace std;
void rotate(int arr[],int a,int b)
{
    for(int i=a,j=b;i<=j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main()
{
    int arr[5]={2,4,6,8,10};
    rotate(arr,1,4);
    for(int k=0;k<=4;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}