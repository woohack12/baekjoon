#include <iostream>
#include <cmath>
#define MAX 1000000
using namespace std;

bool arr[MAX];
void Prime(){
    arr[0]=1,arr[1]=1;
    for(int i=2; i<=sqrt(MAX); i++){
        if(!arr[i]){
            for(int j=i*i; j<=MAX; j+=i){
                arr[j]=true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Prime();
    int n;
    bool flag=true;
    while(1){
        cin>>n;
        if(!n) break;
        else{
            for(int a=3 ;a<=n/2; a++){
                int b=n-a;
                if(!arr[a] && !arr[b]){
                    cout<<n<<" = "<<a<<" + "<<b<<"\n";
                    flag=false;
                    break;
                }
            }
            if(flag) cout<<"Goldbach's conjecture is wrong.\n";
        }
    }
    return 0;
}