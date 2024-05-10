#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    char str[256];
    int b;
    int sum=0;
    scanf("%s%d", str,&b);
    double B=b;
    int str_len=strlen(str);
    for(int i=0; i<str_len; i++){
        int num=0;
        double pos=str_len-i-1;
        if(str[i]>47 && str[i]<58){
            num=str[i]-48;
        }
        else if(str[i]>64 && str[i]<91){
            num=str[i]-55;
        }
        sum+=num*pow(B,pos);
    }
    printf("%d\n", sum);
    return 0;
}