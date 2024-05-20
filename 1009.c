#include  <stdio.h> 
#include <math.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        int a,b;
        int res;
        scanf("%d%d", &a,&b);
        b=b%4;
        if(!b) b=4;
        res=(int)pow((double)a,(double)b)%10;
        if(!res){
            printf("10\n");
        }
        else{
            printf("%d\n", res);
        }
    }
    return 0;
}