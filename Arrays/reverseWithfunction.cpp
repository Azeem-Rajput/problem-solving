#include<iostream>
using namespace std;
void reverse(int arr[])
{
    int i=0;
    int j=4;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[5]={2,4,6,8,10};
    reverse(arr);
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}