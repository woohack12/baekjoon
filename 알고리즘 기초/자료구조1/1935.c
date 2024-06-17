#include <stdio.h>
#include <string.h>

typedef struct Stack{
    float nums[101];
    int top;
}Stack;

Stack st;
void init(){
    st.top=-1;
}
void Push(float num){
    st.top++;
    st.nums[st.top]=num;  
}
float Pop(){
    float num=st.nums[st.top];
    st.top--;
    return num;
}
int main(){
    init();
    int n;
    char str[101];
    scanf("%d", &n);
    int arr[n];
    scanf("%s", str);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<strlen(str); i++){
        if(str[i]>=65 && str[i]<=90){
            int num=arr[str[i]-65];
            Push(num);
        }
        else{
            float num1,num2;
            num2=Pop();
            num1=Pop();
            if(str[i]=='+'){
                Push(num1+num2);
            }
            else if(str[i]=='-'){
                Push(num1-num2);
            }
            else if(str[i]=='*'){
                Push(num1*num2);
            }
            else if(str[i]=='/'){
                Push(num1/num2);
            }
        }
    }
    printf("%.2f\n", st.nums[st.top]);
    return 0;
}