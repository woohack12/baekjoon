#include <stdio.h>
#include <stdlib.h>

#define MAX 100000
typedef struct 
{
    int x;
    int y;
}Point;
int compare(const void *a, const void *b){
    Point *index1=(Point *)a;
    Point *index2=(Point *)b;
    if(index1->y==index2->y){
        return index1->x-index2->x;
    }
    else{
        return index1->y-index2->y;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    Point pos[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &pos[i].x,&pos[i].y);
    }
    qsort(pos,n,sizeof(Point),compare);
    for(int i=0; i<n; i++){
        printf("%d %d\n", pos[i].x,pos[i].y);
    }
    return 0;
}