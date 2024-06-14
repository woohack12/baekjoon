#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int count=0;
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
        count+=arr[i];
    }
    int idx=N-count;
    if(!idx){
        for(int i=0; i<N; i++){
            scanf("%d", &arr[i]);
        }
        int M;
        scanf("%d", &M);
        int ans[M];
        for(int i=0; i<M; i++){
            scanf("%d", &ans[i]);
        }
        for(int i=0; i<M; i++){
            printf("%d ", ans[i]);
        }
    }
    else{   
        int tmp_arr[idx];
        int j=0;
        for(int i=0; i<N; i++){
            int tmp;
            scanf("%d", &tmp);
            if(!arr[i]){
                tmp_arr[j++]=tmp;
            }
        }
        int M;
        scanf("%d", &M);
        int push_data[M];
        for(int i=0; i<M; i++){
            scanf("%d", &push_data[i]);
        }
        for(int i=0; i<M; i++){
            if(i<=idx-1){
                printf("%d ", tmp_arr[idx-i-1]);
            }
            else if(i>idx-1){ 
                printf("%d ", push_data[i-idx]);
            }
        }
    }
    return 0;
}