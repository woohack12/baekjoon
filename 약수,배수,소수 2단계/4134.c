#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        long long num;
        scanf("%lld", &num);
        if(!num){
            printf("2\n");
            continue;
        }
        else if(num==1){
            printf("2\n");
            continue;
        }
        for(long long j=2; j<=sqrt(num); j++){
            if(num%j==0){
                num++;
                j=1;
            }
        }
        printf("%lld\n",num);
    }
}