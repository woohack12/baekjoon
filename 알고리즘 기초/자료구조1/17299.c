#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int num;
    int rot;
    struct Node *next;
}Node;
typedef struct Stack{
    Node *Top;
    int size;
}Stack;

Stack St;

void init(){
    St.size=0;
    St.Top=NULL;
}
void Push(int num, int rot){
    Node *New=(Node *)malloc(sizeof(Node));
    New->next=NULL;
    New->num=num;
    New->rot=rot;
    if(St.size){
        New->next=St.Top;
        St.Top=New;
        St.size++;
    }
    else{
        St.Top=New;
        St.size++;
    }
}
void Pop(){
    if(St.size){
        Node *temp=St.Top;
        St.size--;
        St.Top=St.Top->next;
        free(temp);
    }
    else{
        return;
    }
}
int idx[1000000];
int main(){
    int N;
    scanf("%d", &N);
    int arr[N], ans[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
        idx[arr[i]]++;
    }
    for(int i=N-1; i>=0; i--){
        if(!St.size){
            ans[i]=-1;
            Push(arr[i],idx[arr[i]]);
        }
        else{
            if(St.Top->rot>idx[arr[i]]){
                ans[i]=St.Top->num;
                Push(arr[i],idx[arr[i]]);
            }
            else{
                while(St.size!=0 && St.Top->rot<=idx[arr[i]]){
                    Pop();
                }
                if(St.size){
                    ans[i]=St.Top->num;
                    Push(arr[i],idx[arr[i]]);
                }
                else{
                    ans[i]=-1;
                    Push(arr[i],idx[arr[i]]);
                }
            }
        }
    }
    for(int i=0; i<N; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}