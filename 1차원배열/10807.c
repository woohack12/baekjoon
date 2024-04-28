#include <stdio.h>

int main()
{
    int N;
    int v=0;
    int cnd=0;
    scanf("%d",&N);
    int array[N];
    for(int i=0; i<N;)
    {
        int a;
        scanf("%d",&a);
        array[i]=a;
        i++;
    }
    scanf("%d",&v);
    for(int i=0; i<N; i++)
    {
        int b=array[i];
        if(b==v) cnd++;
    }
    printf("%d\n", cnd);
    return 0;
}