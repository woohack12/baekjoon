#include <stdio.h>

int main(){
    int n;
    int count=0;
    int num[256];
    int remain;
    int quot;
    int a=666,b=0;
    scanf("%d", &n);
    while (1){
        quot=a;
        for(int i=0; i<256; i++){
            num[i]=0;
        }
        for(int i=0; quot!=0; i++){
            remain=quot%10;
            num[i]=remain;
            quot=quot/10;
        }
        for(int i=254; i>0; i--){
            if(num[i]==6){
                if(num[i-1]==num[i] && num[i]==num[i+1]){
                    count++;
                    break;
                }
            }
        }
        if(count==n){
            printf("%d\n", a);
            break;
        }
        a++;
    }
    return 0;
}