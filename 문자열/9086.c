#include <stdio.h>

int main()
{
    char str[1000];
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%s", str);
        for(int j=0; str[j]!=0; j++)
        {
            if(str[j]<65 || str[j]>90)
            return 0;
        }
        int count=0;                                                                        
        for(int j=0; str[j]!=0; j++,count++)
        {
            if(j==0)
            printf("%c",str[j]);
        }
        printf("%c\n",str[count-1]);
    }
    return 0;
}