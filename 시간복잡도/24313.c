#include <stdio.h>

int main(){
    int a1,a0;
    int c;
    int n0;
    scanf("%d%d%d%d", &a1,&a0,&c,&n0);
    if(c-a1==0){
        if(a0==0) printf("1\n");
        else printf("0\n");
    }
    else if(c-a1<0){
        printf("0\n");
    }
    else{
        int quot=a0/(c-a1);
        int remain=a0%(c-a1);
        if(remain!=0) quot++;
        if(n0>=quot) printf("1\n");
        else printf("0\n");
    }
    return 0;
}