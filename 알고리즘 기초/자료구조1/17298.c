#include <stdio.h>
typedef struct Stack{
    int arr[1000000];
    int top;
}Stack;
Stack st;
void init(){
    st.top=-1;
}
void Push(int num){
    st.top++;
    st.arr[st.top]=num;
}
void Pop(){
    if(st.top!=-1){
        st.top--;
    }
    else return;
}
int main(){
    init();
    int n;
    scanf("%d", &n);
    int arr[n];
    int ans[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=n-1; i>=0; i--){
        int num=arr[i];
        if(st.top==-1){
            st.top++;
            st.arr[st.top]=num;
            ans[i]=-1;
        }
        else{
            if(st.arr[st.top]>num){
                ans[i]=st.arr[st.top];
                Push(num);
            }
            else{
                while(st.top!=-1 && st.arr[st.top]<=num){
                    Pop();
                }
                if(st.top==-1){
                    ans[i]=-1;
                    Push(num);
                }
                else{
                    ans[i]=st.arr[st.top];
                    Push(num);
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}