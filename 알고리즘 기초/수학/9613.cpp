#include <iostream>

using namespace std;
int arr[100];
int gcb(int a, int b){
    int num1,num2;
    if(a>b) num1=a,num2=b;
    else num1=b,num2=a;
    int r=num1%num2;
    if(!r) return num2;
    else return gcb(num2,r);
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        long long res=0;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        for(int j=0; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                res+=gcb(arr[j],arr[k]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}