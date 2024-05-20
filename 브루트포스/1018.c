#include <stdio.h>

int main(){
    int M,N;
    int min=0;
    char set_board[10]="BWBWBWBWB";
    scanf("%d%d", &N,&M);
    char board[N][M+1];
    for(int i=0; i<N; i++){
        scanf("%s", board[i]);
    }
    for(int y=0; y<N-7; y++){
        for(int x=0; x<M-7; x++){
            int k;
            int sum_B=0,sum_W=0,temp_min=0;
            for(int i=y; i<y+8; i++){   //보드의 첫 시작이 B일때 바꿔야하는 갯수
                if(i%2==0) k=0;
                else k=1;
                for(int j=x; j<x+8; j++){
                    if(board[i][j]!=set_board[k]) sum_B++;
                    k++;
                }
            }
            for(int i=y; i<y+8; i++){   //보드의 첫 시작이 W일때 바꿔야하는 갯수
                if(i%2==0) k=1;
                else k=0;
                for(int j=x; j<x+8; j++){
                    if(board[i][j]!=set_board[k]) sum_W++;
                    k++;
                }
            }
            if(sum_B<=sum_W) temp_min=sum_B;
            else temp_min=sum_W;
            if(y==0 && x==0) min=temp_min;
            else if(temp_min<min) min=temp_min;
        }
    }
    printf("%d\n", min);
    return 0;
}