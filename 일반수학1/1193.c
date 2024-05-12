#include <stdio.h>

int main(){
    int x,y,n;
    scanf("%d", &n);
    x=1;
    int num=0;
    while(1){
        num+=x;
        if(n<=num) break;
        x++;
    }
    y=num-n;
    if(x%2==0)
    printf("%d/%d\n", x-y,1+y);
    else
    printf("%d/%d\n", 1+y,x-y);
    return 0;
}