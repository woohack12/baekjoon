#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int change;
        int Q=0,D=0,N=0,P=0;
        scanf("%d", &change);
        Q=change/25;
        change=change%25;
        D=change/10;
        change=change%10;
        N=change/5;
        change=change%5;
        P=change/1;
        change=change%1;
        printf("%d %d %d %d\n",Q,D,N,P);
    }
    return 0;
}