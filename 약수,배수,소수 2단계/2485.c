#include <stdio.h>
int gcb(int a, int b){
    int r=a%b;
    if(!r) return b;
    else return gcb(b,r);
}
int main(){
    int n;
    scanf("%d", &n);
    int tree[n];
    int min,max;
    for(int i=0; i<n; i++){
        scanf("%d", &tree[i]);
    }
    int range=tree[n-1]-tree[0];
    int arr[n-1],j=0;
    for(int i=1; i<n; i++){
        arr[j++]=tree[i]-tree[i-1];
    }
    int remain=gcb(arr[1],arr[0]);
    for(int i=2; i<n-1; i++){
        remain=gcb(arr[i],remain);
    }
    printf("%d\n", range/remain-n+1);
    return 0;
}