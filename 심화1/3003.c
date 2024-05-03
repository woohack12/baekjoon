#include <stdio.h>

int main()
{
    int pieces[6]={1,1,2,2,2,8};
    int pic[6];
    for(int i=0; i<6; i++)
    {
        scanf("%d", &pic[i]);
        printf("%d ", pieces[i]-pic[i]);
    }
    return 0;
}