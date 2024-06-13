#include <stdio.h>
#include <stdlib.h> 
typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Queue{
    Node *front;
    Node *rear;
    int size;
}Q;
void init(Q *qu){
    qu->front=NULL;
    qu->rear=NULL;
    qu->size=0;
}
int is_empty(Q *qu){
    return qu->size;
}
void push(Q *qu, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->data=data;
    New->link=NULL;
    if(is_empty(qu)){
        qu->rear->link=New;
        qu->rear=New;
        qu->size++;
    }
    else{
        qu->front=New;
        qu->rear=New;
        qu->size++;
    }
}
int pop(Q *qu){
    if(is_empty(qu)){
        Node *temp=qu->front;
        int data=temp->data;
        qu->front=qu->front->link;
        qu->size--;
        if(!qu->size) qu->rear=NULL;
        free(temp);
        return data;
    }
    else{
        return -1;
    }
}
int main(){
    Q qu;
    init(&qu);
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        push(&qu,i);
    }
    int rot=1;
    int card;
    while(qu.size){
        if(rot%2){
            card=pop(&qu);
        }
        else{
            card=pop(&qu);
            push(&qu,card);
        }
        rot++;
    }
    printf("%d\n", card);
    return 0;
}