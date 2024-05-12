#include <stdio.h>

int main(){
    int n,i=0,num=1; 
    scanf("%d", &n);
    while(1){
        num=num+i*6;
        if(n<=num) break;
        i++;
    }
    printf("%d\n", i+1);
    return 0;
}