#include <stdio.h>
#define MAX 100000
int tmp[MAX+1];
int tmp2[MAX+1];
void merge(int x[],int y[], int l, int m, int r);
void mergeSort(int x[],int y[], int l, int r);
void merge2(int y[], int l, int m, int r);
void mergeSort2(int y[], int l, int r);
int main(){
    int n;
    scanf("%d", &n);
    int x[n],y[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &x[i],&y[i]);
    }
    mergeSort(x,y,0,n-1);
    for(int i=0; i<n; i++){
        int j=i+1;
        int value=x[i];
        while(value==x[j]){
            j++;
        }
        j--;
        mergeSort2(y,i,j);
        i=j;
    }
    for(int i=0; i<n; i++){
        printf("%d %d\n", x[i],y[i]);
    }
    return 0;
}
void merge(int x[],int y[], int l, int m, int r){
    int i=l;
    int k=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(x[i]<=x[j]){
            tmp[k]=x[i];
            tmp2[k]=y[i];
            k++;
            i++;
        }
        else{
            tmp[k]=x[j];
            tmp2[k]=y[j];
            k++;
            j++;
        }
    }
    while(i>m && j<=r){
        tmp[k]=x[j];
        tmp2[k]=y[j];
        k++;
        j++;
    }
    while(j>r && i<=m){
        tmp[k]=x[i];
        tmp2[k]=y[i];
        k++;
        i++;
    }
    for(int i=l; i<=r; i++){
        x[i]=tmp[i];
        y[i]=tmp2[i];
    }
}
void mergeSort(int x[],int y[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(x,y, l, m);
        mergeSort(x,y, m+1, r);
        merge(x, y, l, m, r);
    }
}
void merge2(int y[], int l, int m, int r){
    int i=l;
    int k=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(y[i]<=y[j]){
            tmp[k++]=y[i++];
        }
        else{
            tmp[k++]=y[j++];
        }
    }
    while(i>m && j<=r){
        tmp[k++]=y[j++];
    }
    while(j>r && i<=m){
        tmp[k++]=y[i++];
    }
    for(int i=l; i<=r; i++){
        y[i]=tmp[i];
    }
}
void mergeSort2(int y[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort2(y,l,m);
        mergeSort2(y,m+1,r);
        merge2(y,l,m,r);
    }
}