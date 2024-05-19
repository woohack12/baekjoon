#include <stdio.h>

int main(){
    int degree[3];
    int degree_sum=0;
    for(int i=0; i<3; i++){
        scanf("%d", &degree[i]);
        degree_sum+=degree[i];
    }
    if(degree_sum!=180){
        printf("Error\n");
    }
    else if(degree[0]==60 && degree[1]==60 && degree[2]==60){
        printf("Equilateral\n");
    }
    else if(degree_sum==180){
        if(degree[0]==degree[1])
        printf("Isosceles\n");
        else if(degree[2]==degree[1])
        printf("Isosceles\n");
        else if(degree[0]==degree[2])
        printf("Isosceles\n");
        else
        printf("Scalene\n");
    }
}