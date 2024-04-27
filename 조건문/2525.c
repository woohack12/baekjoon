#include <stdio.h>

int main()
{
    int h,m; //요리를 시작하는 시간
    int time;
    int est_time; //요리하는데 걸리는 시간
    while (1)
    {
        scanf("%d%d", &h,&m);
        scanf("%d", &est_time);
        if (0<=h && h<=23 && 0<=m && m<=59 && 0<=est_time && est_time<=1000)
        {
            if(h==0)
            {
                time = (24*60)+m+est_time;
                if (time>1440)
                {
                    time = time%1440;
                }
                h=time/60;
                if(h==24)
                {
                    h=0;
                }
                m=time%60;
                printf("%d %d\n", h,m);
                break;
            }
            else
            {
                time = (h*60+m)+est_time;
                if (time>1440)
                {
                    time = time%1440;
                }
                h = time/60;
                if(h==24)
                {
                    h=0;
                }
                m = time%60;
                printf("%d %d\n", h,m);
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