#include<stdio.h>
int main()
{
    int n;
    printf("Enter a lines=");
    scanf("%d",&n);
    int m;
    printf("Enter a numbers=");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++){
        printf("%d",j);
        }
        printf("\n");
    }
}