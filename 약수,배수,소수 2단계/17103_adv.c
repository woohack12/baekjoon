#include <stdio.h>
#include <math.h>
#define MAX 1000000
int arr[MAX+1];

void prime(){
    for(int i=0; i<=MAX; i++){
        if(i<2) arr[i]=0;
        else arr[i]=i;
    }
    for(int i=2; i<=sqrt(MAX); i++){
        if(arr[i]){
            for(int j=i*i; j<=MAX; j+=i){
                arr[j]=0;
            }
        }
    }
}
int main(){
    prime();
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int num;
        int cnt=0;
        scanf("%d", &num);
        for(int j=2; j<=num/2; j++){
            if(arr[j]!=0 && arr[num-j]!=0) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}