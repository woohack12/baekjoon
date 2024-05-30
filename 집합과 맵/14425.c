#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 501
#define HASH 9000
typedef struct node{
    char str[MAX];
    struct node *link;
}node;
int gethash(char *str){
    int len=strlen(str);
    int hash=(len+str[0]+str[len-1])*37;
    hash=hash%HASH;
    return hash;
}
void addNode(char *str, node *arr[], int index){  //해시충돌시 새로운 노드 생성
    node *pHead=arr[index];
    node *pNode=(node *)malloc(sizeof(node));
    strcpy(pNode->str,str);
    pNode->link=NULL;
    if(pHead==NULL){
        arr[index]=pNode;
    }
    else{
        while(pHead->link!=NULL){
            pHead=pHead->link;
        }
        pHead->link=pNode;
    }
    
}
int searchNode(char *str, node *arr[], int index){    //노드를 순회하면서 값 찾기
    node *pHead=arr[index];
    while(pHead!=NULL){
        if(!(strcmp(pHead->str,str))) return 1;
        pHead=pHead->link;
    }
    return 0;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    node *str[HASH]={NULL};
    for(int i=0; i<n; i++){
        char tmp[MAX];
        scanf("%s", tmp);
        int index=gethash(tmp);
        addNode(tmp,str,index);
    }
    int count=0;
    for(int i=0; i<m; i++){
        char tmp[MAX];
        scanf("%s", tmp);
        int index=gethash(tmp);
        count+=searchNode(tmp,str,index);
    }
    printf("%d\n", count);
    return 0;
}