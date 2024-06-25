#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
 
bool compare(string a, string b){
    return a<b;
}
int main(){
    string str;
    cin>>str;
    vector<string>arr;
    for(int i=0; i<str.length(); i++){
        arr.push_back(str.substr(i));
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i=0; i<str.length(); i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
