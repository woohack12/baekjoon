#include <stdio.h>

int main()
{
    while(1)
    {
        int h,m;
        int H,M;
        scanf("%d%d", &h, &m);
        if (0<=h && h<=23 && 0<=m && m<=59)
        {
            if(h==0)
            {
                H = ((24*60+m)-45)/60;
                if(H==24)
                {
                    H=0;
                }
                M = ((24*60+m)-45)%60;
                printf("%d %d\n", H, M);
                break;
            }
            else
            {
                H = ((h*60+m)-45)/60;
                M = ((h*60+m)-45)%60;
                printf("%d %d\n", H,M);
                break;
            }
        }
        else
        {
            continue;
        }        
    }
    return 0;
}