#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int array[n];
    for(int i=0; i<n; i++)  //배열 초기화
    {
        array[i]=i+1;
    }
    for(int i=0; i<m; i++)
    {
        int a,b;
        scanf("%d%d", &a,&b);
        a--;
        b--;
        if(a>b) return 0;   //a>b일떄 종료
        while(a<=b)
        {
            int temp = array[a];
            array[a]=array[b];
            array[b]=temp;
            a++;
            b--;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}