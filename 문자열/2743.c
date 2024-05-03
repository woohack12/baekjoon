#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int n=0;
    for(int i=0; i<sizeof(str); i++)
    {
        if(str[i]==0)
        break;
        n++;
    }
    printf("%d\n", n);
    return 0;
}