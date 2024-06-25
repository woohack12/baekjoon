#include <iostream>
#include <string>

using namespace std;
int main(){
    string str;
    char ans[101];
    int idx=0;
    getline(cin,str);
    for(int i=0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9') ans[idx++]=str[i];
        else if(str[i]==' ') ans[idx++]=str[i];
        else{
            if(str[i]>='a' && str[i]<='m') ans[idx++]=str[i]+13;
            else if(str[i]>='n' && str[i]<='z') ans[idx++]=str[i]-13;
            else if(str[i]>='A' && str[i]<='M') ans[idx++]=str[i]+13;
            else ans[idx++]=str[i]-13;
        }
    }
    ans[idx]='\0';
    cout<<ans<<endl;
    return 0;
}