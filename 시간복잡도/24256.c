#include <stdio.h>

int main(){
    long n;
    long sum;
    scanf("%ld", &n);
    for(int i=1; i<n; i++){
        sum+=i;
    }
    printf("%ld\n2\n", sum);
    return 0;
}