#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 51
typedef struct{
    char str[MAX];
}arr;
int compare(const void *a,const void *b){
    arr *ptr1=(arr *)a;
    arr *ptr2=(arr *)b;
    if(strlen(ptr1->str)==strlen(ptr2->str)) return strcmp(ptr1->str,ptr2->str);
    else return strlen(ptr1->str)-strlen(ptr2->str);
}

int main(){
    int n;
    scanf("%d", &n);
    arr str_arr[n];
    for(int i=0; i<n; i++){
        scanf("%s", str_arr[i].str);
    }
    qsort(str_arr,n,sizeof(arr),compare);
    int end=n-1;
    for(int i=0; i<end; i++){
        int j=i+1;
        if(!(strcmp(str_arr[i].str,str_arr[j].str))){
            for(int k=j; k<end; k++){
                strcpy(str_arr[k].str,str_arr[k+1].str);
            }
            memset(str_arr[end].str,0,sizeof(arr));
            end--;
            i--;
        }
    }
    for(int i=0; i<n; i++){
        if(str_arr[i].str[0]==0) continue;
        printf("%s\n",str_arr[i].str);
    }
    return 0;
}