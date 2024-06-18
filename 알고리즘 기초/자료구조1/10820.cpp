#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    while(getline(cin,str)){
        int upper=0,lower=0,num=0,space=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]==' ') space++;
            else if(str[i]>='0' && str[i]<='9') num++;
            else if(str[i]>='A' && str[i]<='Z') upper++;
            else if(str[i]>='a' && str[i]<='z') lower++;
        }
        cout <<lower<<" "<<upper<<" "<<num<<" "<<space<<endl;
    }
    return 0;
}