#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        int a,b;
        scanf("%d%d", &a,&b);
        printf("Case #%d: %d + %d = %d\n", i,a,b,a+b);
    }
    return 0;
}