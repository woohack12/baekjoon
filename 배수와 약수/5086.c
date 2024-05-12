#include <stdio.h>

int main(){
    char *str[3]={"factor","multiple","neither"};
    int num1,num2;
    while(1){
        int i=0;
        scanf("%d%d", &num1,&num2);
        if(num1==0 && num2==0) break;

        if(num1<num2){
        while(1){
            if(num1*i==num2){
                printf("%s\n", str[0]);
                break;
            }
            else if (num1*i>num2){
                printf("%s\n",str[2]);
                break;
            }
            i++;
            }
        }
        else if(num1>num2){
            while(1){
                if(num2*i==num1){
                printf("%s\n", str[1]);
                break;
                }
                else if (num2*i>num1){
                printf("%s\n",str[2]);
                break;
                }
                i++;
            }
        }
    }
    return 0;
}