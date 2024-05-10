#include <stdio.h>

int main(){
    int num[9][9];
    int max[9]={0,};
    int MAX=0;
    int X=0;
    int Y=0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &num[i][j]);
            if(num[i][j]>max[i]){
                max[i]=num[i][j];
            }
        }
        if(max[i]>MAX){
            MAX=max[i];
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(MAX==num[i][j]){
                X=i+1;
                Y=j+1;
                break;
            }
        }
        if(X!=0 && Y!=0){
            break;
        }
    }
    printf("%d\n%d %d\n", MAX,X,Y);
}