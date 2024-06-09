#include <stdio.h>
int gcb(int a, int b){
    int r=a%b;
    if(!r) return b;
    else return gcb(b,r);
}

int main(){
    int num1,num2,num3,num4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    int min,max;
    if(num2>num4) max=num2,min=num4;
    else max=num4,min=num2;
    int remain=gcb(max,min);
    int res1=(num4/remain*num1)+(num2/remain*num3);
    int res2=num2*num4/remain;
    if(res1>res2) max=res1,min=res2;
    else max=res2,min=res1;
    remain=gcb(max,min);
    res1/=remain, res2/=remain;
    printf("%d %d\n", res1,res2);
}