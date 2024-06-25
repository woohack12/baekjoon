#include <iostream>

using namespace std;
int uclide(int a, int b){
    int r=a%b;
    if(r) return uclide(b,r);
    else return b;
}
int main(){
    int a,b,r;
    cin>>a>>b;
    if(a>b) r=uclide(a,b);
    else if(a<b) r=uclide(b,a);
    else{
        cout<<a<<endl<<a<<endl;
        return 0;
    }
    cout<<r<<endl<<r*(a/r)*(b/r)<<endl;
    return 0;
}