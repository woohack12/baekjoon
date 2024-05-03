#include <stdio.h>

int main()
{
    int n, tmp;
    scanf("%d", &n);
    char str[n+1];
    tmp=0;
    scanf("%s", str);
    for(int i=0; i<n; i++)
    {
        tmp+=str[i]-48;
    }    
    printf("%d\n", tmp);
}