#include <stdio.h>
#include <stdlib.h>
void insertionSort(int *arr, int n);
int main(){
    int N,k;
    scanf("%d%d", &N,&k);
    int *arr=(int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    insertionSort(arr,N);
    printf("%d\n",arr[N-k]);
    free(arr);
    return 0;
}
void insertionSort(int *arr, int n){
    int flag;
    int tmp;
    for(int i=1; i<n; i++){
        tmp=arr[i];
        for(int j=i-1; j>=0 && arr[j]>tmp; j--){
            arr[j+1]=arr[j];
            flag=j;
        }
        arr[flag]=tmp;
    }
}