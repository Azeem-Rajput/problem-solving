#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    // int f=1;
    // while (n>=1)
    // {
    //     f=f*n;
    //     n--;
    // }

    //     printf("The factorial of number is=%d",f);
    //     return 0;
    int product=1;
    for (int i = 1; i <= n; i++)
    {
        product=product*i;
    }
    printf("The factorial of a given number is=%d",product);
    return 0;
}