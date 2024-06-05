#include <stdio.h>
#include <stdlib.h>
#define Bucket_Size 1000000

typedef struct Node{
    int num;
    int count;
    struct Node *link;
}Node;
int getHash(int num){
    if(num<0){
        num=num*-1;
        int hash=(num^(num>>8))%Bucket_Size;
        return hash;
    }
    else{
        int hash=(num^(num>>8))%Bucket_Size;
        return hash;
    }
}
Node* addNode(int key){
    Node *pNode=(Node *)malloc(sizeof(Node));
    pNode->num=key;
    pNode->count=1;
    pNode->link=NULL;
    return pNode;
}
void createBucket(int key, Node *arr[]){
    int idx=getHash(key);
    Node *pHead=arr[idx];
    Node *pNew=addNode(key);
    Node *pPre;
    if(pHead==NULL){
        arr[idx]=pNew;
    }
    else{
        while(pHead!=NULL){
            if(pHead->num==key){
                pHead->count++;
                return;
            }
            pPre=pHead;
            pHead=pHead->link;
        }
        pPre->link=pNew;
    }
}
int displayNode(int key, Node *arr[]){
    int idx=getHash(key);
    Node *pHead=arr[idx];
    if(pHead==NULL){
        return 0;
    }
    else{
        while(pHead!=NULL){
            if(pHead->num==key) return pHead->count;
            pHead=pHead->link;
        }
        return 0;
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    Node *Bucket[Bucket_Size]={NULL};
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d", &tmp);
        createBucket(tmp,Bucket);
    }
    scanf("%d", &m);
    int arr[m];
    for(int i=0; i<m; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<m; i++){
        printf("%d ", displayNode(arr[i],Bucket));
    }
    printf("\n");
    return 0;
}