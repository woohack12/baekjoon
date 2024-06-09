#include <stdio.h>

long long int gcb(long long int a, long long int b){
    long long int r=a%b;
    if(!r){
        return b;
    }
    else{
        return gcb(b, r);
    }
}
long long int main(){
    long long int a,b;
    scanf("%lld %lld", &a,&b);
    long long int min,max;
    if(a>b) max=a,min=b;
    else max=b,min=a;
    long long int remain=gcb(max,min);
    min/=remain, max/=remain;
    printf("%lld\n",min*max*remain);
    return 0;
}