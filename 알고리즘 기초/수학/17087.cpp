#include <iostream>
#include <algorithm>

using namespace std;
int gcd(int a, int b){
    int num1,num2;
    if(a>b) num1=a, num2=b;
    else num1=b, num2=a;
    int r=num1%num2;
    if(!r) return num2;
    else return gcd(b,r);
}
bool compare(int a, int b){
    return a>b;
}
int main(){
    int n,s,ans;
    int tmp;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>s) arr[i]-=s;
        else arr[i]=s-arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0; i<n; i++){
        if(i==0) ans=arr[i];
        else ans=gcd(ans,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}