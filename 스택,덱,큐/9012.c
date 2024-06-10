#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Stack{
    Node *top;
    int sum;
}Stack;
void init(Stack *S){
    S->sum=0;
    S->top=NULL;
}
int is_empty(Stack *S){
    return (S->top==NULL)?0:1;
}
void push(Stack *S, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->data=data;
    New->link=NULL;
    if(is_empty(S)){
        New->link=S->top;
        S->top=New;
        S->sum++;
    }
    else{
        S->top=New;
        S->sum++;
    }
}
int pop(Stack *S){
    if(is_empty(S)){
        Node *temp=S->top;
        S->sum--;
        S->top=S->top->link;
        free(temp);
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    Stack S;
    for(int i=0; i<n; i++){
        init(&S);
        int flag=1;
        char tmp[51];
        scanf("%s", tmp);
        for(int j=0; j<strlen(tmp); j++){
            if(tmp[j]=='('){
                push(&S, 1);
            }
            else{
                if(!pop(&S)){
                    flag=0;
                    break;
                }
            }
        }
        if(flag && !S.sum){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}