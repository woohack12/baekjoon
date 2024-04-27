#include <stdio.h>

int main()
{
    while (1)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        if (2<=a && a<=10000 && 2<=b && b<=10000 && 2<=c && c<=10000)
        {
            printf("%d\n", (a+b)%c);
            printf("%d\n", ((a%c)+(b%c))%c);
            printf("%d\n", (a*b)%c);
            printf("%d\n",((a%c)*(b%c))%c);
            break;
        }
        else
        {
            continue;
        }
    }
}