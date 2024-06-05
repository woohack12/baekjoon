#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int *)a-*(int *)b);
}
int Search(int *arr, int num, int l, int r){
    if(l>r) return 0;
    else{
        int m=(l+r)/2;
        if(arr[m]>num) return Search(arr,num,l,m-1);
        else if(arr[m]<num) return Search(arr,num,m+1,r);
        else return 1; 
    }
}
int main(){
    int n,m,numA,numB;
    scanf("%d %d", &n,&m);
    numA=n,numB=m;
    int arrA[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arrA[i]);
    }
    qsort(arrA,n,sizeof(int),compare);
    for(int i=0; i<m; i++){
        int tmp;
        scanf("%d", &tmp);
        if(Search(arrA,tmp,0,n-1)){
            numA--;
            numB--;
        }
    }
    printf("%d\n", numA+numB);
    return 0;
}