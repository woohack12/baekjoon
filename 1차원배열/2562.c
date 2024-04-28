#include <stdio.h>

int main()
{
    int array[9];
    for(int i=0; i<9; i++)
    {
        scanf("%d", &array[i]);
    }
    int max=array[0];
    int max_num=1;
    for(int i=1; i<9; i++)
    {
        if(max<array[i])
        {
        max=array[i];
        max_num=i+1;
        }
    }
    printf("%d\n%d\n", max,max_num);
    return 0;
}