#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d", &n,&m);
    int array[n];
    for(int i=0; i<n; i++)
    {
        array[i]=i+1;
    }
    
    for(int i=0; i<m; i++)
    {
        int num1,num2;
        scanf("%d%d", &num1,&num2);
        int a=array[num1-1];
        array[num1-1]=array[num2-1];
        array[num2-1]=a;
       
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}