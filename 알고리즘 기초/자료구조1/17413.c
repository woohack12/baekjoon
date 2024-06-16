#include <stdio.h>
#include <string.h>

char str[100001];
char ans[100001];
char stack[100001];
int top=-1;
int idx=0;
int main(){
    scanf("%[^\n]", str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='<'){
            while(top!=-1){
                ans[idx++]=stack[top];
                top--;
            }
            while(str[i]!='>'){
                ans[idx++]=str[i++];
            }
            ans[idx++]=str[i];
        }
        else if(str[i]==' '){
            while(top!=-1){
                ans[idx++]=stack[top];
                top--;
            }
            ans[idx++]=str[i];
        }
        else{
            top++;
            stack[top]=str[i];
        }
    }
    while(top!=-1){
        ans[idx++]=stack[top];
        top--;
    }
    printf("%s\n", ans);
    return 0;
}