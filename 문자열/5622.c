#include <stdio.h>

int main()
{
    char input_str[16];
    char number[8][5];
    int pos=0;
    int time=0;
    for(int i=0; i<8; i++)
    {
        if(i==7 || i==5)
        number[i][4]='\0';
        else
        number[i][3]='\0';
        for(int j=0; j<3; j++)
        {
            if(i==7 || i==5)
            {
                for(int k=0; k<4; k++)
                {
                    number[i][k]='A'+pos;
                    pos++;
                }
                break;
            }
            number[i][j]='A'+pos;
            pos++;
        }
    }
    scanf("%s", input_str);
    for(int i=0; input_str[i]!='\0'; i++)
    {
        for(int j=0; j<8; j++)
        {
            for(int k=0; number[j][k]!='\0'; k++)
            {
                if(number[j][k]==input_str[i])
                {
                    time+=j+3;
                }
            }
        }
    }
    printf("%d\n", time);
    return 0;
}