#include<iostream>
using namespace std;
int main()
{
    int arr[4]={2,3,4,5};
    int product=1;
    for(int i=0;i<=3;i++)
    {
        product=product*arr[i];
    }
    cout<<product;
  
    return 0;
}