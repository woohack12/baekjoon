#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *link;
}Node;
typedef struct Queue{
    Node *front;
    Node *rear;
    int size;
}Q;
void init(Q *q){
    q->front=NULL;
    q->rear=NULL;
    q->size=0;
}
int is_empty(Q *q){
    return q->size;
}
void push(Q *q, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->data=data;
    New->link=NULL;
    if(is_empty(q)){
        q->rear->link=New;
        q->rear=New;
        q->size++;
    }
    else{
        q->front=New;
        q->rear=New;
        q->size++;
    }
}
int pop(Q *q){
    if(is_empty(q)){
        Node *temp=q->front;
        int data=temp->data;
        q->front=temp->link;
        q->size--;
        if(!q->size){
            q->rear=NULL;
        }
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
    char *str[6]={"push","pop","size","empty","front","back"};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        char cmd[5];
        scanf("%s", cmd);
        if(!strcmp(str[0],cmd)){
            int data;
            scanf("%d", &data);
            push(&qu,data);
        }
        else if(!strcmp(str[1],cmd)){
            printf("%d\n", pop(&qu));
        }
        else if(!strcmp(str[2],cmd)){
            printf("%d\n", qu.size);
        }
        else if(!strcmp(str[3],cmd)){
            printf("%d\n", is_empty(&qu)? 0:1);
        }
        else if(!strcmp(str[4],cmd)){
            printf("%d\n", is_empty(&qu)? qu.front->data:-1);
        }
        else if(!strcmp(str[5],cmd)){
            printf("%d\n", is_empty(&qu)? qu.rear->data:-1);
        }
    }
    return 0;
}