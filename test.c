#include <stdio.h>
#define MAX 100000
int tmp[MAX+1];
int tmp2[MAX+1];
void merge(int y[],int x[], int l, int m, int r);
void mergeSort(int y[],int x[], int l, int r);
void merge2(int x[], int l, int m, int r);
void mergeSort2(int x[], int l, int r);
int main(){
    int n;
    scanf("%d", &n);
    int x[n],y[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &x[i],&y[i]);
    }
    mergeSort(y,x,0,n-1);
    for(int i=0; i<n; i++){
        int j=i+1;
        int value=y[i];
        while(value==y[j]){
            j++;
        }
        j--;
        mergeSort2(x,i,j);
        i=j;
    }
    for(int i=0; i<n; i++){
        printf("%d %d\n", x[i],y[i]);
    }
    return 0;
}
void merge(int y[],int x[], int l, int m, int r){
    int i=l;
    int k=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(y[i]<=y[j]){
            tmp[k]=y[i];
            tmp2[k]=x[i];
            k++;
            i++;
        }
        else{
            tmp[k]=y[j];
            tmp2[k]=x[j];
            k++;
            j++;
        }
    }
    while(j<=r){
        tmp[k]=y[j];
        tmp2[k]=x[j];
        k++;
        j++;
    }
    while(i<=m){
        tmp[k]=y[i];
        tmp2[k]=x[i];
        k++;
        i++;
    }
    for(int i=l; i<=r; i++){
        y[i]=tmp[i];
        x[i]=tmp2[i];
    }
}
void mergeSort(int y[],int x[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(y,x, l, m);
        mergeSort(y,x, m+1, r);
        merge(y, x, l, m, r);
    }
}
void merge2(int x[], int l, int m, int r){
    int i=l;
    int k=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(x[i]<=x[j]){
            tmp[k++]=x[i++];
        }
        else{
            tmp[k++]=x[j++];
        }
    }
    while(j<=r){
        tmp[k++]=x[j++];
    }
    while(i<=m){
        tmp[k++]=x[i++];
    }
    for(int i=l; i<=r; i++){
        x[i]=tmp[i];
    }
}
void mergeSort2(int x[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort2(x,l,m);
        mergeSort2(x,m+1,r);
        merge2(x,l,m,r);
    }
}