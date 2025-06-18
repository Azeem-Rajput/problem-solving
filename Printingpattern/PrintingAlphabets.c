#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of lines=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for (int j = 1; j<=n; j++)
        {
            int alphabets=a+64;
            char ch=(char)alphabets;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}