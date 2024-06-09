#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int num1,num2;
        int min,max;
        scanf("%d %d", &num1,&num2);
        if(num1>num2) min=num2,max=num1;
        else if(num1<num2) min=num1,max=num2;
        else{
            printf("%d\n", num1);
            continue;
        }
        int under=2;
        int res=1;
        while(under<max){
            if(min%under==0 && max%under==0){
                res*=under;
                min/=under,max/=under;
            }
            else under++;
        }
        res*=min*max;
        printf("%d\n", res);
    }
    return 0;
}