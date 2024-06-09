#include <stdio.h>
#include <math.h>

int main(){
    while (1){
        int n;
        scanf("%d", &n);
        if(!n) break;
        int arr[2*n+1];
        for(int i=0; i<=2*n; i++){
            if(i==1) arr[i]=0;
            else{
                arr[i]=i;
            }
        }
        for(int i=2; i<=sqrt(2*n); i++){
            if(arr[i]){
                for(int j=i*i; j<=2*n; j+=i){
                    arr[j]=0;
                }
            }
        }
        int count=0;
        for(int i=n+1; i<=2*n; i++){
            if(arr[i]) count++;
        }
        printf("%d\n", count);
    }
    
}