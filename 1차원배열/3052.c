#include <stdio.h>

int main()
{
    int array[10]={0};
    int array_con[42]={0};
    for(int i=0; i<10; i++)
    {
        int n;
        scanf("%d", &n);
        array[i]=n%42;
    }
    int count=0;
    for(int i=0; i<10; i++)
    {
        int res=array[i];
        if(array_con[res]==0)
        {
            array_con[res]=1;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}