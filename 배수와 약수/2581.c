#include <stdio.h>

int check_prime(int M);
int main(){
    int M,N;
    int sum=0,min=0;
    scanf("%d%d",&M,&N);
    for(M; M<=N; M++){
        if(check_prime(M)){
            sum+=M;
            if(!(min)) min=M;
        }
    }

    if(!(sum)){
        printf("-1\n");
    }
    else{
        printf("%d\n%d\n",sum,min);
    }
    return 0;
}
int check_prime(int M){
    if(M==2) return 1;
    else if(M==1) return 0;
    for(int i=2; i<M; i++){
        if(!(M%i)){
            return 0;
        }
    }
    return 1;
}