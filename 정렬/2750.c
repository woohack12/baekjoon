#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int min,tmp;
    scanf("%d", &n);
    int *arr=(int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]) min=j;
        }
        tmp=arr[i];
        arr[i]=arr[min];
        arr[min]=tmp;
        printf("%d\n", arr[i]);
    }
    return 0;
}