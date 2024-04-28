#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int array[N];

    for(int i=0; i<N; i++)  //처음 바구니 세팅
    {
        array[i]=0;
    }

    for(int a=0; a<M; a++) //공을 넣는 부분
    {
        int i,j,k;
        scanf("%d%d%d", &i,&j,&k);
        for(i=i-1; i<j; i++)
        {
            array[i]=k;
        }
    }

    for(int i=0; i<N; i++)  // 공 출력 부분
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}