#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char ch;
    struct Node *prev;
    struct Node *next;
}Node;
Node *head, *tail, *cursor;
void init(){
    head=(Node *)malloc(sizeof(Node));
    tail=(Node *)malloc(sizeof(Node));
    head->prev=head;
    head->next=tail;
    tail->prev=head;
    tail->next=tail;
    cursor=head;
}
void Left(){
    if(cursor!=head){
        cursor=cursor->prev;
    }
}
void Right(){
    if(cursor!=tail->prev){
        cursor=cursor->next;
    }
}
void insert(char data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->ch=data;
    New->prev=cursor;
    New->next=cursor->next;
    cursor->next->prev=New;
    cursor->next=New;
    cursor=New;
}
void Del(){
    if(cursor!=head){
        Node *temp=cursor;
        cursor=cursor->prev;
        cursor->next=cursor->next->next;
        cursor->next->prev=cursor;
        free(temp);
    }
}
void print(){
    cursor=head->next;
    while(cursor!=tail){
        printf("%c", cursor->ch);
        cursor=cursor->next;
    }
    printf("\n");
}

int main(){
    init();
    char c;
    while((c=getchar())!='\n'){
        insert(c);
    }
    int n;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++){
        scanf(" %c", &c);
        if(c=='P'){
            scanf(" %c", &c);
            insert(c);
        }
        else if(c=='L') Left();
        else if(c=='D') Right();
        else if(c=='B') Del();
    }
    print();
    return 0;
}