#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int dot=2;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        dot=dot+pow(2.0,i);
    }
    printf("%d\n",dot*dot);
    return 0;
}