#include <stdio.h>

int main()
{
    char str[100][101];
    for(int i=0; i<100; i++)
    {
        if(fgets(str[i], sizeof(str[i]), stdin)!=NULL)
        printf("%s", str[i]);
    }
    return 0;
}