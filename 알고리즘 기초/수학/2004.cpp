#include <iostream>
#include <cmath>

using namespace std;
int Size(int n, int num){
    int size=0;
    while(1){
        if(n<pow(num,size)) break;
        size++;
    }
    return size-1;
}
int Res(int input, int size, int num){
    int res=0;
    for(int i=1; i<=size; i++){
        res+=input/pow(num,i);
    }
    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    int size_two=Size(n,2);
    int size_five=Size(n, 5);
    int res_two=Res(n,size_two,2)-Res(m,size_two,2)-Res(n-m,size_two,2);
    int res_five=Res(n,size_five,5)-Res(m,size_five,5)-Res(n-m,size_five,5);
    if(res_two>res_five) cout<<res_five<<endl;
    else cout<<res_two<<endl;
    return 0;
}