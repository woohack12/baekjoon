#include <stdio.h>

int main(){
    long n;
    long sum=0;
    scanf("%ld", &n);
    for(int i=1; i<=n-2; i++){
        sum+=i*(i+1)/2;
    }
    printf("%ld\n3\n", sum);
}