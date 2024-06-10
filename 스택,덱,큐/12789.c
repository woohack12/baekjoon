#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int num;
    struct Node *link;
}Node;
typedef struct Stack{
    Node *top;
    int size;
}Stack;
void init(Stack *s){
    s->top=NULL;
    s->size=0;
}
int is_empty(Stack *s){
    return s->size;
}
void push(Stack *s, int num){
    Node *New=(Node *)malloc(sizeof(Node));
    New->num=num;
    New->link=NULL;
    if(is_empty(s)){
        New->link=s->top;
        s->top=New;
        s->size++;
    }
    else{
        s->top=New;
        s->size++;
    }
}
void pop(Stack *s){
    if(is_empty(s)){
        Node *temp=s->top;
        s->top=s->top->link;
        s->size--;
        free(temp);
    }
    else{
        return;
    }
}
int main(){
    int n;
    Stack s;
    init(&s);
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int flag=1;
    int idx=0;
    int person=1;
    while(idx<n){
        if(arr[idx]==person){
            idx++;
            person++;
        }
        else if(s.top!=NULL && s.top->num==person){
            pop(&s);
            person++;
        }
        else if(arr[idx]!=person){
            push(&s,arr[idx]);
            idx++;
            if(s.size>1 && s.top->num>s.top->link->num){
                printf("Sad\n");
                flag=0;
                break;
            }
        }
    }
    if(flag){
        printf("Nice\n");
    }
    return 0;
}