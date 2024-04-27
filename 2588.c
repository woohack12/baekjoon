#include <stdio.h>


int main()
{
    int a,b,c,d,e;
    scanf("%d%d", &a,&b);
    c = b/100;  // 100의자리
    d = (b%100)/10;  //10의자리
    e = (b%100)%10; // 1의자리
    printf("%d\n", a*e);
    printf("%d\n", a*d);
    printf("%d\n", a*c);
    printf("%d\n", a*b);
    return 0;
}