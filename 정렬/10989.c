#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
int main(){
    int n,tmp;
    int count[MAX+1]={0,};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &tmp);
        count[tmp]++;
    }
    for(int i=1; i<MAX+1; i++){
        count[i]+=count[i-1];
    }
    for(int i=0; i<count[0]; i++){
        printf("%d\n",0);
    }
    for(int i=1; i<MAX+1; i++){
        for(int j=0; j<count[i]-count[i-1]; j++){
            printf("%d\n",i);
        }
    }
    return 0;
}