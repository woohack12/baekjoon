#include <stdio.h>

int main()
{
    int array[30]={0};
    for(int i=0; i<28; i++)
    {
        int n;
        scanf("%d", &n);
        if(n<1 || n>30)
        return 0;
        if(array[n-1]==0)
        array[n-1]=n;
        else
        return 0;
    }
    for(int i=0; i<30; i++)
    {
       if(array[i]==0)
       printf("%d\n", i+1);
    }
    return 0;
}