#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if(N<4 || N>1000 || N%4!=0)
    return 0;

    for(int i=1; i<=N/4; i++)
    {
        printf("long ");
    }
    printf("int\n");
    return 0;
}