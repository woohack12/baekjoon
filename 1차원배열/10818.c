#include <stdio.h>

int main()
{
    int N;
    int max,min;
    scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0; i<N; i++)
    {
        if(i==0)
        {
        max=array[i];
        min=array[i];
        }
        if(max<array[i])
        max=array[i];
        if(min>array[i])
        min=array[i]; 
    }
    printf("%d %d\n", min,max);
    return 0;
}
