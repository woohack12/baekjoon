#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Stack{
    Node *top;
    int size;
}Stack;
void initStack(Stack *S){
    S->top=NULL;
    S->size=0;
}
int is_Empty(Stack *S){
    if(S->size) return 0;   //not empty
    else return 1;  //empty
}
void Push(Stack *S, int data){
    Node *pNew=(Node *)malloc(sizeof(Node));
    pNew->data=data;
    pNew->link=NULL;
    if(is_Empty(S)){
        S->top=pNew;
        S->size++;
    }
    else{
        pNew->link=S->top;
        S->top=pNew;
        S->size++;
    }
}
int Pop(Stack *S){
    if(is_Empty(S)){
        return -1;
    }
    else{
        Node *temp=S->top;
        int data=temp->data;
        S->top=S->top->link;
        S->size--;
        free(temp);
        return data;
    }
}
int main(){
    int n;
    Stack S;
    initStack(&S);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int cmd;
        scanf("%d", &cmd);
        if(cmd==1){
            int data;
            scanf("%d", &data);
            Push(&S,data);
        }
        else if(cmd==2){
            printf("%d\n", Pop(&S));
        }
        else if(cmd==3){
            printf("%d\n", S.size);
        }
        else if(cmd==4){
            printf("%d\n", is_Empty(&S));
        }
        else{
            if(S.size){
                printf("%d\n", S.top->data);
            }
            else printf("-1\n");
        }
    }
    return 0;
}