#include <stdio.h>

int main()
{
    int N,X;
    scanf("%d%d", &N,&X);
    int array[N];
    for(int i=0; i<N; i++)
    {
        int a;
        scanf("%d", &a);
        array[i]=a;
    }
    for(int i=0; i<N; i++)
    {
        if(array[i]<X)
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}