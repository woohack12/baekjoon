#include <stdio.h>
#include <math.h>

void primeNum(int arr[],int num){
    for(int i=0; i<=num; i++){
        if(i==1) arr[i]=0;
        else{
            arr[i]=i;
        }
    }
    for(int i=2; i<=sqrt(num); i++){
        if(arr[i]){
            for(int j=i*i; j<=num; j+=i){
                arr[j]=0;
            }
        }
    }
}
int main(){
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        int num;
        scanf("%d", &num);
        int arr[num+1];
        primeNum(arr,num);
        int min_idx=2;
        int max_idx=num;
        while(!arr[max_idx]){
            max_idx--;
        }
        int count=0;
        while(min_idx<=max_idx){
            if(arr[min_idx]+arr[max_idx]<num){
                while(1){
                    min_idx++;
                    if(arr[min_idx]!=0) break;
                }
                continue;
            }
            else if(arr[min_idx]+arr[max_idx]>num){
                while(1){
                    max_idx--;
                    if(arr[max_idx]!=0) break;
                }
                continue;
            }
            else{
                count++;
                while(1){
                    min_idx++;
                    if(arr[min_idx]!=0) break;
                }
                while(1){
                    max_idx--;
                    if(arr[max_idx]!=0) break;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}