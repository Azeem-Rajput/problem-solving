#include<iostream>
using namespace std;
int maze(int cr,int cc,int er,int ec)
{
    int Rightway=0;
    int downway=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)
    {
        Rightway +=maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        downway +=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
       Rightway +=maze(cr,cc+1,er,ec);
       downway +=maze(cr+1,cc,er,ec);
    }
    int total=Rightway+downway;
    return total;
}
int main()
{
    int cr;
    cout<<"Enter a number of current row=";
    cin>>cr;
    int cc;
    cout<<"Enter a number of current column=";
    cin>>cc;
    int er;
    cout<<"Enter a number of last row=";
    cin>>er;
    int ec;
    cout<<"Enter a number of last column=";
    cin>>ec;
    int ans=maze(cr,cc,er,ec);
    cout<<ans;
    return 0;
}