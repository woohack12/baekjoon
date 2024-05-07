#include <stdio.h>

int main()
{
    char str[101];
    int count=0;
    scanf("%s", str);
    for(int i=0; str[i]!=0;i++){
        count++;
    }
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='='){
            if(str[i-1]=='c' || str[i-1]=='s'){
                count--;
            }
            else if(str[i-1]=='z' && str[i-2]=='d'){
                count-=2;
            }
            else if(str[i-1]=='z'){
                count--;
            }
        }
        else if(str[i]=='-'){
            if(str[i-1]=='c' || str[i-1]=='d'){
                count--;
            }
        }
        else if(str[i]=='j'){
            if(str[i-1]=='l' || str[i-1]=='n'){
                count--;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}