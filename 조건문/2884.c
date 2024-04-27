#include <stdio.h>

int main()
{
    while (1)
    {
        int h,m;
        scanf("%d%d", &h,&m);
        if (h<0 || h>23 || m<0 || m>59)
        {
            continue;
        }
        else
        {
            if(m==0) //정각일때
            {
                h=h-1;
                if (h<0)   //시간이 0일때
                {
                    h=23;
                }
                else  //나머지
                {
                    h=h-1;
                }
                m=15;
                printf("%d %d\n",h,m);
                break;
            }
            else if(m!=0) // 정각이 아닐때
            {
                m=m-45; //45분을 전으로 돌림
                if (m<0)
                {
                    m=60+m; //시간이 바뀌는경우
                    h=h-1;
                    if(h<0)
                    {
                        h=23; // 날이 하나 뒤로 감
                    }

                }
                printf("%d %d\n", h,m);
                break;
            }
        }
    

    }
  

}