#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define HASH 1000000

typedef struct Node
{
    char name[6];
    char log[6];
    struct Node *link;
}Node;

int gethash(char *key){
    int hash=0;
    int len=strlen(key);
    for(int i=0; i<len; i++){
        hash+=(key[i]-'A')*(len-i);
    }
    hash%=HASH;
    return hash;
}
void addNode(char *key, char *value, int index, Node *arr[]){
    Node *pHead=arr[index];
    Node *pNode=(Node *)malloc(sizeof(Node));
    strcpy(pNode->name,key);
    strcpy(pNode->log,value);
    if(pHead!=NULL){
        if(strcmp(pHead->name,key)==0){
            strcpy(pHead->log,value);
            return;
        }
        while(pHead->link!=NULL){
            if(strcmp(pHead->name,key)==0){
                strcpy(pHead->log,value);
                free(pNode);
                return;
            }
            pHead=pHead->link;
        }
        pHead->link=pNode;
    }
    else arr[index]=pNode;
}
int main(){
    int n;
    scanf("%d", &n);
    Node *arr[HASH]={NULL};
    for(int i=0; i<n; i++){
        char name[6];
        char log[6];
        scanf("%s %s", name,log);
        int index=gethash(name);
        addNode(name,log,index,arr);
    }
    Node *display;
    for(int i=0; i<HASH; i++){
        display=arr[i];
        if(display==NULL) continue;
        else if(strcmp(display->log,"enter")==0) printf("%s\n", display->name);
    }
}