#include <stdio.h>
#include <math.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    int arr[n+1];
    for(int i=0; i<=n; i++){
        if(i==1) arr[i]=0;
        else{
            arr[i]=i;
        }
    }
    for(int i=2; i<=sqrt(n); i++){
        if(arr[i]){
            for(int j=i*i; j<=n; j+=i){
                arr[j]=0;
            }
        }
    }
    for(int i=m; i<=n; i++){
        if(arr[i]) printf("%d\n", arr[i]);
    }
    return 0;
}