#include <stdio.h>

int main()
{
    int X,N,a,b;
    int res=0;
    scanf("%d\n%d", &X,&N);
    if(X<1 || X>1000000000 || N<1 || N>100)
    return 0;
    for(int i=0; i<N; i++)
    {
        scanf("%d%d", &a,&b);
        if(a<1 || a>1000000 || b<1 || b>10)
        return 0;
        res+=a*b; 
    }
    if(X==res)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}