#include <stdio.h>

int main(){
    int edge[3]={0};
    int max_edge=edge[0];
    int sum_edge=0;
    for(int i=0; i<3; i++){
        scanf("%d", &edge[i]);
        if(max_edge<edge[i])
        max_edge=edge[i];
        sum_edge+=edge[i];
    }
    sum_edge-=max_edge;
    if(max_edge>=sum_edge){
        printf("%d\n", sum_edge*2-1);
    }
    else{
        printf("%d\n", sum_edge+max_edge);
    }
    return 0;
}