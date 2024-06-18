#include <iostream>
#include <string>

using namespace std;

struct Stack{
    char str[101];
    int top;
};
Stack st;
void init(){
    st.top=-1;
}
void Push(char c){
    st.top++;
    st.str[st.top]=c;
}
char Pop(){
    char data=st.str[st.top];
    st.top--;
    return data;
}
int Priority(char c){
    if(c=='+' || c=='-') return 0;
    else if(c=='*' || c=='/') return 1;
    else return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    init();
    string str;
    char ans[101];
    int idx=0;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            ans[idx++]=str[i];
        }
        else if(str[i]=='(') Push(str[i]);
        else if(str[i]==')'){
            while(st.str[st.top]!='('){
                ans[idx++]=Pop();
            }
            Pop();
        }
        else{
            int num=Priority(str[i]);
            if(st.top==-1){
                Push(str[i]);
            }
            else{
                int num=Priority(str[i]);
                if(num>Priority(st.str[st.top])) Push(str[i]);
                else{
                    while(num<=Priority(st.str[st.top]) && st.top!=-1){
                        ans[idx++]=Pop();
                    }
                    Push(str[i]);
                }
            }
        }
    }
    while(st.top!=-1){
        ans[idx++]=Pop();
    }
    ans[idx]='\0';
    cout << ans <<endl;
    return 0;
}