#include <stdio.h>

int main(){
    while(1){
        int edge[3]={0,0,0};
        int max_edge=0;
        int sum_edge=0;
        for(int i=0; i<3; i++){
            scanf("%d", &edge[i]);
            if(max_edge<edge[i])
            max_edge=edge[i];
            sum_edge+=edge[i];
        }
        if(!sum_edge) break;

        sum_edge-=max_edge;
        if(max_edge>=sum_edge){
            printf("Invalid\n");
        }
        else{
            if(edge[0]==edge[1] && edge[0]==edge[2])
            printf("Equilateral\n");
            else{
                if(edge[0]==edge[1])
                printf("Isosceles\n");
                else if(edge[0]==edge[2])
                printf("Isosceles\n");
                else if(edge[2]==edge[1])
                printf("Isosceles\n");
                else
                printf("Scalene\n");
            }
        }
    }
    return 0;
}