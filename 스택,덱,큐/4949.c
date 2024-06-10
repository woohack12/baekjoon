#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Stack{
    Node *top;
    int size;
}Stack;
void init(Stack *S){
    S->size=0;
    S->top=NULL;
}
int is_empty(Stack *S){
    return S->size;
}
void push(Stack *S, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->data=data;
    New->link=NULL;
    if(is_empty(S)){
        New->link=S->top;
        S->top=New;
        S->size++;
    }
    else{
        S->top=New;
        S->size++;
    }
}
int pop(Stack *S, int data){
    if(is_empty(S)){
        Node *temp=S->top;
        if(temp->data==data){
            S->top=S->top->link;
            S->size--;
            free(temp);
            return 1;
        }
        else return 0;
    }
    else return 0;
}
int main(){
    Stack s;
    while(1){
        init(&s);
        int flag=1;
        init(&s);
        char tmp[101];
        gets(tmp);
        if(tmp[0]=='.') break;
        for(int i=0; i<strlen(tmp); i++){
            if(tmp[i]=='('){
                push(&s,1);
            }
            else if(tmp[i]=='['){
                push(&s,2);
            }
            else if(tmp[i]==')'){
                if(!pop(&s,1)){
                    flag=0;
                    break;
                }
            }
            else if(tmp[i]==']'){
                if(!pop(&s,2)){
                    flag=0;
                    break;
                }
            }
        }
        if(flag && !s.size) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}