#include <stdio.h>

int main(){
    while (1){
        int n;
        int sum=0,factor=1;
        int fac_arr[100000]={0,};
        scanf("%d", &n);
        if(n==-1) break;
        for(factor; factor<n; factor++){
            if(n%factor==0){
                fac_arr[factor]=1;
                sum+=factor;
            }
        }
        if(sum==n){
            printf("%d = 1",n);
            for(int i=2; i<n; i++){
                if(fac_arr[i]==1){
                    printf(" + %d",i);
                }
            }
            printf("\n");
        }
        else{
            printf("%d is NOT perfect.\n",n);
        }
    }
    return 0;
}
