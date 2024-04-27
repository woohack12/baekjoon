#include <stdio.h>

int main()
{
    while (1)
    {
        int a,b,c;
        int res;
        scanf("%d%d%d", &a,&b,&c);
        if(1<=a && a<=6 && 1<=b && b<=6 && 1<=c && c<=6)
        {
            if(a==b && b==c && a==c) //같은 눈이 3개일 경우
            {
                res = 10000+(a*1000);
                printf("%d\n", res);
                break;
            }
            else if(a==b || b==c || a==c)   //같은 눈이 2개일 경우 
            {
                if(a==b)    //a=b일경우
                {
                    res = 1000+(a*100);
                    printf("%d\n", res);
                    break;
                }
                else if(b==c)   //b=c일경우
                {
                    res = 1000+(b*100);
                    printf("%d\n", res);
                    break;
                }
                else    //a=c일경우
                {
                    res = 1000+(a*100);
                    printf("%d\n", res);
                    break;
                }
                
            }
            else
            {
                if(a>b && a>c)
                {
                    res = a*100;
                    printf("%d\n", res);
                    break;
                }
                else if(b>a && b>c)
                {
                    res = b*100;
                    printf("%d\n", res);
                    break;
                }
                else
                {
                    res = c*100;
                    printf("%d\n", res);
                    break;
                }
            }
            
        }
        else
        {
            continue;
        }
    }
    return 0;
}