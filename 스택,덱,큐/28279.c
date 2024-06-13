#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int num;
    struct Node *next;
    struct Node *pre;
}Node;
typedef struct Deque{
    Node *head;
    Node *rear;
    int size;
}Deq;
void init(Deq *deq){
    deq->head=NULL;
    deq->rear=NULL;
    deq->size=0;
}
int is_empty(Deq *deq){
    return deq->size;
}
void Push_head(Deq *deq, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->num=data;
    New->next=NULL;
    New->pre=NULL;
    if(is_empty(deq)){
        New->next=deq->head;
        New->pre=deq->rear;
        deq->head->pre=New;
        deq->rear->next=New;
        deq->head=New;
        deq->size++;
    }
    else{
        deq->head=New;
        deq->rear=New;
        deq->size++;
    }
}
void Push_rear(Deq *deq, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->num=data;
    New->next=NULL;
    New->pre=NULL;
    if(is_empty(deq)){
        New->next=deq->head;
        New->pre=deq->rear;
        deq->rear->next=New;
        deq->head->pre=New;
        deq->rear=New;
        deq->size++;
    }
    else{
        deq->head=New;
        deq->rear=New;
        deq->size++;
    }
}
int Pop_head(Deq *deq){
    if(is_empty(deq)){
        Node *temp=deq->head;
        int data=temp->num;
        deq->size--;
        if(deq->size){
            deq->head=deq->head->next;
            deq->head->pre=deq->rear;
            deq->rear->next=deq->head;
        }
        else{
            deq->head=NULL;
            deq->rear=NULL;
        }

        free(temp);
        return data;
    }
    else{
        return 0;
    }
}
int Pop_rear(Deq *deq){
    if(is_empty(deq)){
        Node *temp=deq->rear;
        int data=temp->num;
        deq->size--;
        if(deq->size){
            deq->rear=deq->rear->pre;
            deq->rear->next=deq->head;
            deq->head->pre=deq->rear;
        }
        else{
            deq->rear=NULL;
            deq->head=NULL;
        }
        free(temp);
        return data;
    }
    else{
        return 0;
    }
}
int main(){
    Deq deq;
    init(&deq);
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int cmd,data;
        scanf("%d", &cmd);
        switch (cmd){
            case 1:
            scanf("%d", &data);
            Push_head(&deq,data);
            break;
            case 2:
            scanf("%d", &data);
            Push_rear(&deq,data);
            break;
            case 3:
            printf("%d\n", is_empty(&deq)? Pop_head(&deq):-1);
            break;
            case 4:
            printf("%d\n", is_empty(&deq)? Pop_rear(&deq):-1);
            break;
            case 5:
            printf("%d\n", deq.size);
            break;
            case 6:
            printf("%d\n", is_empty(&deq)? 0:1);
            break;
            case 7:
            printf("%d\n", is_empty(&deq)? deq.head->num:-1);
            break;
            case 8:
            printf("%d\n", is_empty(&deq)? deq.rear->num:-1);
            break;
        }
    }
    return 0;
    
}