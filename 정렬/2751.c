#include <stdio.h>
#include <stdlib.h>
int partition(int *arr, int l, int r);
void quikSort(int *arr,int l, int r);
void swap(int *a, int *b);
int main(){
    int n;
    scanf("%d", &n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quikSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

void quikSort(int *arr,int l, int r){
    if(l<r){
        int p=partition(arr,l,r);
        quikSort(arr,l,p-1);
        quikSort(arr,p+1,r);
    }
}
void swap(int *a, int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
int partition(int *arr, int l, int r){
    int p=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<p){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i+1], &arr[r]);
    return i+1; //pivot position
}