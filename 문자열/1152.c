#include <stdio.h>

int main()
{
    char str[1000001];
    int count=0;
    long size=0;
    scanf("%[^\n]s", str);
    for(int i=0; str[i]!=0; i++)
    {
        size++;
    }
    if(str[0]!=32)
    count++;
    for(int i=0; i<size; i++)
    {
        if(str[i]==32 && str[i+1]!=32 && str[i+1]!=0)
        count++;
    }
    printf("%d\n", count);
    return 0;
}