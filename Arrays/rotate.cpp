#include<iostream>
using namespace std;
void reverse(int arr[],int a,int b)
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
    int n;
    cout<<"Enter a value of n=";
    cin>>n;
    int k;
    cout<<"Enter a value of k=";
    cin>>k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int j=0;j<=4;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}