#include <stdio.h>

int main()
{
    char str[1000][21];
    int t,r;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%s", &r, str[i]);
        for(int j=0; str[i][j]!=0; j++)
        {
            for(int k=0; k<r; k++)
            {
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}