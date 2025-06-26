#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,6,4,10};
    int x;
    cout<<"Enter a value of x=";
    cin>>x;
    int check=0;
    bool var=false;
    for(int k=0;k<=4;k++)
    {
        if(arr[k]==x)
        {
            var=true;
        }
    }
    if (var==true)
    {
        cout<<"present in array";
    }
    else
    {
        cout<<"not present in array";
    }


    return 0;
}