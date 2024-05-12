#include <stdio.h>

int main(){
    int A,B,V;
    int day=1;
    scanf("%d%d%d",&A,&B,&V);
    int remain=(V-A)%(A-B);
    int quot=(V-A)/(A-B);
    if(V-A>0){
        if(remain!=0){
            day+=quot+1;
        }
        else{
            day+=quot;
        }
    }     
    printf("%d\n",day);
    return 0;
}