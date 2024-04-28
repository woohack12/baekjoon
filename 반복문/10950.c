#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arry[T];
    for(int i=0; i<T;)
    {
        int a,b;
        int res;
        scanf("%d%d", &a,&b);
        if(a<=0 || a>=10 || b<=0 || b>=10)
        {
            return 0;
        }
        res = a+b;
        arry[i]=res;
        i++;
    }
    for(int i=0; i<T; i++)
    {
        printf("%d\n", arry[i]);
    }
    
}