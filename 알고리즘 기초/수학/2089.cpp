#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int n;
    string res;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    while(n!=1){
        int num=n/-2;
        if(num*-2>n) num++;
        res+=to_string(n-(num*-2));
        n=num;
    }
    res+='1';
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}