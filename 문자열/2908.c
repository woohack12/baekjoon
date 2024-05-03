#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num[2][4];
    int num1,num2;
    scanf("%s%s", num[0],num[1]);
    for(int i=0; i<2; i++)
    {
        char tmp=num[i][0];
        num[i][0]=num[i][2];
        num[i][2]=tmp;
    }
    num1=atoi(num[0]);
    num2=atoi(num[1]);
    if(num1>num2)
    printf("%d\n", num1);
    else
    printf("%d\n", num2);
    return 0;
}