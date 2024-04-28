#include <stdio.h>

int main()
{
    int n;
    int res=0;
    scanf("%d", &n);
    if(n<1 || n>10000)
    {
    return 0;
    }
    for(int i=1; i<=n; i++)
    {
        res=res+i;
    }
    printf("%d\n", res);
    return 0;
}

