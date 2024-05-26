#include <stdio.h>

int main(){
    long n;
    int arr[10];
    scanf("%ld", &n);
    int a=0;
    while(n!=0){
        arr[a++]=n%10;
        n/=10;
    }
    for(int i=1; i<a; i++){
        int j=i-1;
        int value=arr[i];
        while(arr[j]<value && j>=0){
            arr[j+1]=arr[j];
            arr[j]=value;
            j--;
        }
    }
    for(int i=0; i<a; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}