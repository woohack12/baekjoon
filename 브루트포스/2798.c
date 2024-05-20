#include <stdio.h>

int main(){
    int n,sum;
    int arr[100];
    int max=0;
    scanf("%d%d", &n,&sum);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]<=sum && arr[i]+arr[j]+arr[k]>max){
                    max=arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}