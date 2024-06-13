#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int idx;
    int move_num;
    struct Node *next;
    struct Node *prev;
}Node;
typedef struct Deque{
    Node *head;
    Node *rear;
    int size;
}Deq;

void init(Deq *de){
    de->head=NULL;
    de->rear=NULL;
    de->size=0;
}
int is_empty(Deq *de){
    return de->size;
}
void Push(Deq *de, int idx, int move_num){
    Node *New=(Node *)malloc(sizeof(Node));
    New->idx=idx;
    New->move_num=move_num;
    New->prev=NULL;
    New->next=NULL;
    if(is_empty(de)){
        de->rear->next=New;
        de->head->prev=New;
        New->prev=de->rear;
        New->next=de->head;
        de->rear=New;
        de->size++;
    }
    else{
        de->head=New;
        de->rear=New;
        de->size++;
    }
}
int Pop(Deq *de){
    Node *temp=de->head;
    Node *Pre=de->head->prev;
    int idx=temp->idx;
    int rot=temp->move_num;
    Pre->next=de->head->next;
    de->head->next->prev=Pre;
    if(rot<0){
        rot*=-1;
        de->head=Pre;
        for(int i=0; i<rot-1; i++){
            de->head=de->head->prev;
        }
    }
    else{
        for(int i=0; i<rot; i++){
            de->head=de->head->next;
        }
    }
    free(temp);
    return idx;
}
int main(){
    Deq de;
    init(&de);
    int n;
    scanf("%d", &n);
    int ans[n];
    for(int i=0; i<n; i++){
        int data;
        scanf("%d", &data);
        Push(&de, i+1, data);
    }
    for(int i=0; i<n; i++){
        printf("%d ", Pop(&de));
    }
    return 0;
}