#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


typedef struct STR{
    char str[1001];
}STR;


int compare(const void *a, const void *b){
    STR *ptr1=(STR *)a;
    STR *ptr2=(STR *)b;
    return strcmp(ptr1->str,ptr2->str);
}
int main(){
    char str[1001];
    scanf("%s", str);
    STR *arr=(STR *)malloc(sizeof(STR)*500501);
    int count=0;
    int idx=0;
    int cpylen=1;
    for(int i=0; i<strlen(str); i++){
        for(int j=0; j<strlen(str)-i; j++){
            strncpy(arr[idx++].str,str+j,cpylen);
        }
        cpylen++;
    }
    qsort(arr,idx,sizeof(STR),compare);
    for(int i=0; i<idx; i++){
        if(!i){
            count++;
        }
        else{
            int j=i-1;
            if (strcmp(arr[j].str,arr[i].str)==0) continue;
            count++;
        }
    }
    printf("%d\n", count);
}