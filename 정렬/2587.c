#include <stdio.h>

int main(){
    int score[5];
    int min;
    int average=0;
    for(int i=0; i<5; i++){
        scanf("%d", &score[i]);
        average+=score[i];
    }
    for(int i=0; i<5; i++){
        min=i;
        for(int j=i+1; j<5; j++){
            if(score[j]<score[min]) min=j;
        }
        int tmp=score[i];
        score[i]=score[min];
        score[min]=tmp;
    }
    printf("%d\n%d\n", average/5,score[2]);
    return 0;
}