#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    int r=0;
    int s=n;
    while (n>0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reverse is=%d\n",r);
    printf("The sum and reverse is=%d",s+r);
    return 0;
}