#include <stdio.h>

int main(){
    int N,K;
    int num_k=1;
    int i=0;
    scanf("%d%d", &N,&K);
    while(1){
        if(N%num_k==0){
           i++;
        }
        if(i==K){
            break;
        }
        num_k++;
        if(num_k>N){
            num_k=0;
            break;
        }
    }
    printf("%d\n", num_k);
    return 0;
}