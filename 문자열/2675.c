#include <stdio.h>
#include <string.h>

int main()
{
    int t,r;
    char str[161]={0};
    char tmp_str[21]={0};
    printf("%s", str);
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%s", &r,tmp_str);
        int tmp=r;
        for(int j=0; tmp_str[j]!=0; j++)
        {
            for(int k=0; k<r; k++)
            {
                if(str[k]==0)
                str[k]=tmp_str[j];
            }
            r+=tmp;
        }
        printf("%s\n", str);
        memset(str, 0, sizeof(str));
    }   
    return 0;
}