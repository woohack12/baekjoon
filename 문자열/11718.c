#include <stdio.h>

int main()
{
    char str[101][101];
    for(int i=0; i<101; i++)
    {
        scanf("%s", str[i]);
        printf("%s\n", str[i]);
    }
    return 0;
}