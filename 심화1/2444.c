#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        for(int j=0; j<num-i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    num-=1;
   for(int i=1; i<=num; i++)
   {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<(num-i)*2+1; j++)
        {
            printf("*");
        }
        printf("\n");
   }
   return 0;
}