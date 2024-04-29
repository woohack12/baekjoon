#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float array[n];
    int max=0;
    float aver=0;
    for(int i=0; i<n; i++)  //입력 받은 점수를 배열에 넣고 최댓값 구하는 반복문
    {
        int score;
        scanf("%d", &score);
        array[i]=score;
        if(max<score)
        max=score;
    }
    for(int i=0; i<n; i++)  //배열에 있는 값들을 주어진 식으로 계산해서 다시 배열하고 평균구하기
    {
        array[i]=array[i]/max*100;
        aver+=array[i]/n;
    }
    printf("%.6f\n", aver);
    return 0;
}