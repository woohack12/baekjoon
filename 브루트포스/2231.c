#include <stdio.h>

int main(){
    int n;
    int M=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int sum=0;
        int quot=i;
        int remain=0;
        while(1){
            remain=quot%10;
            sum+=remain;
            quot=quot/10;
            if(!quot){
                sum+=i;
                break;
            }
        }
        if(sum==n){
            M=i;
            break;
        }
    }
    printf("%d\n", M);
}