#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int num;
    struct Node *link;
}Node;
typedef struct List{
    Node *pHead;
    Node *pTail;
    int size;
}List;
void init(List *list){
    list->pHead=NULL;
    list->pTail=NULL;
    list->size=0;
}
void addNode(List *list, int data){
    Node *New=(Node *)malloc(sizeof(Node));
    New->num=data;
    New->link=NULL;
    if(list->size){
        list->pTail->link=New;
        list->pTail=New;
        New->link=list->pHead;
        list->size++;
    }
    else{
        list->pHead=New;
        list->pTail=New;
        New->link=New;
        list->size++;
    }
}
int delNode(List *list, int rot){
    Node *pPre=list->pHead;
    if(list->size){
        for(int i=0; i<rot; i++){
            list->pHead=list->pHead->link;
        }
        for(int i=0; i<rot-1; i++){
            pPre=pPre->link;
        }
        Node *temp=list->pHead;
        int data=temp->num;
        list->pHead=temp->link;
        list->size--;
        pPre->link=temp->link;
        free(temp);
        return data;
    }
    else{
        return 0;
    }
}

int main(){
    int n,k;
    List list;
    init(&list);
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++){
        addNode(&list,i+1);
    }
    int ans[n];
    int idx=0;
    while(list.size){
        ans[idx++]=delNode(&list,k-1);
    }
    printf("<");
    for(int i=0; i<n; i++){
        if(i==n-1){
            printf("%d>\n",ans[i]);
        }
        else{
            printf("%d, ", ans[i]);
        }
    }
    return 0;
}