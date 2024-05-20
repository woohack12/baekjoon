#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    int X,Y;
    scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
    for(int x=-999; x<1000; x++){
        int flag=0;
        for(int y=-999; y<1000; y++){
            if(a*x+b*y==c && d*x+e*y==f){
                X=x;
                Y=y;
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    printf("%d %d\n", X,Y);
    return 0;
}