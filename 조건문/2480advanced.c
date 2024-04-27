#include <stdio.h>


int main()
{
    int a,b,c,max;
    scanf("%d%d%d", &a,&b,&c);
    max = a;
    if(max<b)
    max = b;
    if(max<c)
    max = c;
    if(a==b)
    {
        if(b==c)
        printf("%d\n",10000+a*1000);
        else
        printf("%d\n", 1000+a*100);        
    }
    else if(b==c)
    printf("%d\n", 1000+b*100);
    else if(a==c)
    printf("%d\n", 1000+a*100);
    else
    printf("%d\n", max*100);
    
    
    return 0;
}