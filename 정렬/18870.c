#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
typedef struct{
    int x;
    int index;
}arr_x;
int compare1(const void *a, const void *b){                       
    arr_x *ptr1=(arr_x *)a;
    arr_x *ptr2=(arr_x *)b;
    return ptr1->x-ptr2->x;
}

int compare2(const void *a, const void *b){
    arr_x *ptr1=(arr_x *)a;
    arr_x *ptr2=(arr_x *)b;
    return ptr1->index-ptr2->index;
}
int main(){
    int n;
    scanf("%d", &n);
    arr_x arr[n];
    arr_x *ptr=arr;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i].x);
        arr[i].index=i;
    }
    qsort(arr,n,sizeof(arr_x),compare1);
    int num=0;
    for(int i=0; i<n; i++){
        int j=i+1;
        int value=arr[i].x;
        arr[i].x=num;
        while(arr[j].x==value){
            arr[j++].x=num;
        }
        i=j-1;
        num++;
    }
    qsort(arr,n,sizeof(arr_x),compare2);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i].x);
    }
    printf("\n");
    return 0;
}