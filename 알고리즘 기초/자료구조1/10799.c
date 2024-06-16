#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;
typedef struct Stack{
    Node *top;
    int size;
}Stack;

Stack st;
void init(){
    st.size=0;
    st.top=NULL;
}
void Push(int rot){
    Node *New=(Node *)malloc(sizeof(Node));
    New->data=rot;
    New->next=NULL;
    if(st.size){
        New->next=st.top;
        st.top=New;
        st.size++;
    }
    else{
        st.top=New;
        st.size++;
    }
}
int Pop(){
    if(st.size){
        Node *temp=st.top;
        int data=temp->data;
        st.top=st.top->next;
        st.size--;
        free(temp);
        return data;
    }
    else{
        return 0;
    }
}
int main(){
    init();
    char str[100001];
    int count=0;
    int flag;
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='('){
            Push(i);
        }
        else if(str[i]==')'){
            flag=Pop();
            if(flag+1==i) count+=st.size;
            else count++;
        }
    }
    printf("%d\n", count);
    return 0;
}