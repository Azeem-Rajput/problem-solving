#include<iostream>
using namespace std;
int main()
{
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int brr[2][4]={{1,2,3,4},{5,6,7,8}};
    int result[3][4];
    int con=2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
          result[i][j]=0;
          for(int k=0;k<con;k++)
          {
            result[i][j] +=arr[i][k]*brr[k][j];
          }
        }
        
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
        cout<<result[i][j];
        }
        cout<<endl;
    }

    return 0;
}