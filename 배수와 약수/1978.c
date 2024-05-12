#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int prime=n;
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        if(num==1){
            prime--;
        }
        for(int j=2; j<num; j++){
            if(!(num%j)){
                prime--;
                break;
            }
        }
    }
    printf("%d\n", prime);
    return 0;
}