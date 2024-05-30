#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int binarySearch(int arr[], int l, int r, int num){
    if(l>r) return 0;
    else{
        int m=(l+r)/2;
        if(arr[m]==num) return 1;
        else if(arr[m]<num) return binarySearch(arr,m+1,r,num);
        else return binarySearch(arr,l,m-1,num);
    }
}
int main(){
    int n,m;
    scanf("%d", &n);
    int card[n];
    for(int i=0; i<n; i++){
        scanf("%d", &card[i]);
    }
    qsort(card,n,sizeof(int),compare);
    scanf("%d", &m);
    int inputCard[m];
    for(int i=0; i<m; i++){
        scanf("%d", &inputCard[i]);
    }
    for(int i=0; i<m; i++){
        printf("%d ",binarySearch(card,0,n-1,inputCard[i]));
    }
    return 0;
}