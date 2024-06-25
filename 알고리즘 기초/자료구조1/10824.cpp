#include <iostream>
#include <string>

using namespace std;
int main(){
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    long long num1=stoll(a+b);
    long long num2=stoll(c+d);
    cout<<num1+num2<<endl;
    return 0;
}