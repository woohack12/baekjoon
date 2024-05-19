#include <stdio.h>

int main(){
    int n;
    int x[100000]={0,},y[100000]={0,};
    int max_x,min_x,max_y,min_y;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d%d", &x[i],&y[i]);
        if(!i){
            max_x=x[0];
            min_x=x[0];
            max_y=y[0];
            min_y=y[0];
        }
        if(max_x<x[i]) max_x=x[i];
        else if(min_x>x[i]) min_x=x[i];
        if(max_y<y[i]) max_y=y[i];
        else if(min_y>y[i]) min_y=y[i];
    }
    printf("%d\n", (max_x-min_x)*(max_y-min_y));
}