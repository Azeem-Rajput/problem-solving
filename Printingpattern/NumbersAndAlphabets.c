#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter a number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
          if (i % 2 == 0)
          {
            int alphabet=a+64;
            char ch = (char)alphabet;
            printf("%c", ch);
            a++;
            }
          else
          {
            printf("%d", j);
            
          }

        }
        printf("\n");
    }
    return 0;
}