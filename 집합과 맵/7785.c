#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define HASH 1000000

typedef struct Node
{
    char name[6];
    struct Node *link;
}Node;
typedef struct
{
    char name[6];
}Name;


int gethash(char *key){
    int hash=0;
    int len=strlen(key);
    for(int i=0; i<len; i++){
        hash+=(key[i]-'A')*(len-i);
    }
    hash%=HASH;
    return hash;
}
void addNode(char *key, int index, Node *arr[]){
    Node *pHead=arr[index];
    Node *pNode=(Node *)malloc(sizeof(Node));
    strcpy(pNode->name,key);
    pNode->link=NULL;
    if(pHead==NULL) arr[index]=pNode;
    else{
        while(pHead->link!=NULL){
            pHead=pHead->link;
        }
        pHead->link=pNode;
    }
}
void delNode(char *key, int index, Node *arr[]){
    Node *pHead=arr[index];
    Node *pPre;
    Node *pCur;
    if(pHead==NULL) return;
    else{
        pCur=pHead;
        if(strcmp(pCur->name,key)==0){
            pHead=pHead->link;
            arr[index]=pHead;
            free(pCur);
        }
        pPre=pHead;
        pCur=pCur->link;
        while(pCur!=NULL){
            if(strcmp(pCur->name,key)==0){
                pHead=pCur->link;
                pPre->link=pHead;
                free(pCur);
            }
            pPre=pCur;
            pCur=pCur->link;
        }
    }
}
void search(Node *arr[], char *key,int index){
    Node *pHead=arr[index];
    while(pHead!=NULL){
        if(strcmp(pHead->name,key)==0){
            printf("%s\n",pHead->name);
            return;
        }
        pHead=pHead->link;
    }
}
int compare(const void *a, const void *b){
    Name *ptr1=(Name *)a;
    Name *ptr2=(Name *)b;
    return strcmp(ptr2->name,ptr1->name);
}
int main(){
    int n;
    scanf("%d", &n);
    Name name_str[n];
    Node *arr[HASH]={NULL};
    for(int i=0; i<n; i++){
        char log[6];
        scanf("%s %s", name_str[i].name,log);
        int index=gethash(name_str[i].name);
        if(strcmp(log,"enter")==0) addNode(name_str[i].name,index,arr);
        else if(strcmp(log,"leave")==0) delNode(name_str[i].name,index,arr);
    }
    qsort(name_str,n,sizeof(Name),compare);
    for(int i=0; i<n; i++){
        int index=gethash(name_str[i].name);
        if(!i){
            search(arr,name_str[i].name,index);
        }
        else{
            int j=i-1;
            if(strcmp(name_str[j].name,name_str[i].name)==0) continue;
            search(arr,name_str[i].name,index);
        }
    }
    return 0;
}