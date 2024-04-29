#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    if(str[100]!=0) return 1;
    int num=0;
    for(int i=0; i<=sizeof(str); i++)
    {
        int con=str[i];
        if(con==0) break;
        num++;
    }
    printf("%d\n", num);
    return 0;
}