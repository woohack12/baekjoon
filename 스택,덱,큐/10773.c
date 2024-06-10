#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Stack{
    Node *top;
    int sum;
}Stack;
void init(Stack *S){
    S->top=NULL;
    S->sum=0;
}
int is_Empty(Stack *S){
    return S->sum;
}
void Push(Stack *S, int data){
    Node *pNew=(Node *)malloc(sizeof(Node));
    pNew->data=data;
    pNew->link=NULL;
    if(is_Empty(S)){
        pNew->link=S->top;
        S->top=pNew;
        S->sum+=pNew->data;
    }
    else{
        S->top=pNew;
        S->sum+=pNew->data;
    }
}
void Pop(Stack *S){
    if(is_Empty(S)){
        Node *temp=S->top;
        S->top=S->top->link;
        S->sum-=temp->data;
        free(temp);
    }
    else{
        return;
    }
}
int main(){
    int k;
    Stack S;
    init(&S);
    scanf("%d", &k);
    for(int i=0; i<k; i++){
        int num;
        scanf("%d", &num);
        if(num){
            Push(&S,num);
        }
        else{
            Pop(&S);
        }
    }
    printf("%d\n", S.sum);
    return 0;
}