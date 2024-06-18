#include <iostream>
#include <string>

using namespace std;
int ans[26];
int main(){
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        ans[str[i]-97]++;
    }
    for(int i=0; i<26; i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}