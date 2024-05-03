#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int len_str=strlen(str)-1;
    for(int i=0; i<=len_str; i++)
    {
        if(str[i]!=str[len_str])
        {
            printf("0\n");
            return 0;
        }
        else
        len_str--;
    }
    printf("1\n");
    return 0;
}
