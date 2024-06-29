#include <iostream>
#include <string>

using namespace std;
int main(){
    string str;
    int sum=0;
    cin>>str;
    if(str=="0"){
        cout<<0<<endl;
        return 0;
    }
    string res;
    for(int i=0; i<str.length(); i++){
        res +=to_string((str[i]-'0')/4);
        res +=to_string(((str[i]-'0')%4)/2);
        res +=to_string((((str[i]-'0')%4)%2)/1);
    }
    bool flag=true;
    for(int i=0; i<res.length(); i++){
        if(flag){
            if(res[i]=='1'){
                cout<<res[i];
                flag=false;
            }
        }
        else{
            cout<<res[i];
        }
    }
    cout<<endl;
    return 0;
}