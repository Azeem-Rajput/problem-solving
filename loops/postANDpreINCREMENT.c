#include <stdio.h>
int main()
// {
//     int x = 1; printf("%d\n", x);
//     printf("%d\n",x++)://firstly print value than increament
//     printf("%d\n",++x);//firstly print increamented value 
//     return 0;
// }
{
    int x=4;
    int y=0;
    int z;
    while(x>=0){
        if(x==y)
        break;
        else
        printf("\n%d %d",x,y);
        x--;
        y++;
    }
}