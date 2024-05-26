#include <stdio.h>
#include <stdlib.h>
#define max 1000000
void merge(int *arr, int l, int m, int r);
void mergeSort(int *arr, int l, int r);
int tmp[max];
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0,n-1);
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

void merge(int *arr, int l, int m, int r){
    int i=l;
    int j=m+1;
    int k=l;

    while(i<=m && j<=r){    //왼쪽 부분 오른쪽 부분 비교
        if(arr[i]<=arr[j]){
            tmp[k++]=arr[i++];
        }
        else{
            tmp[k++]=arr[j++];
        }
    }
    while(j<=r){
        tmp[k++]=arr[j++];
    }
    while(i<=m){
        tmp[k++]=arr[i++];
    }
    k--;
    for(int a=l; a<=r; a++){
        arr[a]=tmp[a];
    }
}
void mergeSort(int *arr, int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr, m+1, r);
        merge(arr, l,m,r);
    }
}