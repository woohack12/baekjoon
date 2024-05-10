#include <stdio.h>

int main(){
    int num,b;
    int quot=0, remain=0;
    char str[256]={0,};
    scanf("%d%d", &num,&b);
    int n=0;
    while(num>=b){
        remain=num%b;
        if(remain<10){
            str[n]=remain+48;
        }
        else{
            str[n]=remain+55;
        }
        n++;
        num=num/b;
        
    }
    if(num<10){
        str[n]=num+48;
        str[n+1]=0;
    }
    else{
        str[n]=num+55;
        str[n+1]=0;
    }
    for(int i=0; i<n+1; i++){
        char temp=str[i];
        str[i]=str[n];
        str[n]=temp;
        n--;
    }
    printf("%s\n", str);
    return 0;
}
