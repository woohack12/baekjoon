#include <stdio.h>

int main()
{
    char str[1000];
    int count=0;
    fgets(str, sizeof(str), stdin);
    if(str[0]!=' ')
    count++;
    for(int i=0; i<1000; i++)
    {
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
        count++;
    }
    printf("%d\n", count);
    return 0;
}