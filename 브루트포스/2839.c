#include <stdio.h>

int main(){
    int n;
    int sum;
    int min=2000;
    int flag=0;
    scanf("%d", &n);
    for(int x=0; x<2000; x++){
        for(int y=0; y<2000; y++){
            if(3*x+5*y==n){
                sum=x+y;
                flag=1;
                if(sum<min){
                    min=sum;
                }
            }
        }
    }
    if(flag) printf("%d\n", min);
    else printf("-1\n");
    return 0;
}