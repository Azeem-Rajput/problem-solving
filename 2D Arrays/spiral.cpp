#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter a no of rows=";
    cin>>r;
    int c;
    cout<<"Enter  no of column=";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int total=r*c;
    int count=0;
    while(count<total)
    {
        for(int j=minc;j<=maxc;j++)
        {
            arr[minr][j];
            count++;
        }
        minr++;
        if(count>=total) break;
        for(int i=minr;i<=maxr;i++)
        {
            arr[i][maxc];
            count++;
        }
        maxc--;
        if(count>=total) break;
        for(int j=maxc;j>=minc;j--)
        {
            arr[maxr][j];
            count++;
        }
        maxr--;
        if(count>=total) break;
        for(int i=maxr;i>=minr;i--)
        {
            arr[i][minc];
            count++;
        }
        minc++;
        if(count>=total) break;
    }

    return 0;
}