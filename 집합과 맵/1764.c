#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct People{
    char name[21];
}People;

int compare(const void *a, const void *b){
    People *ptr1=(People *)a;
    People *ptr2=(People *)b;
    return strcmp(ptr1->name,ptr2->name);
}
int Search(People *arr, char *str, int l, int r){
    if(l>r) return 0;
    else{
        int m=(l+r)/2;
        if(strcmp(str,arr[m].name)<0) return Search(arr,str,l,m-1);
        else if(strcmp(str,arr[m].name)>0) return Search(arr,str,m+1,r);
        else return 1;  
    }
}

int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    People name[n];
    for(int i=0; i<n; i++){
        scanf("%s", name[i].name);
    }
    qsort(name,n,sizeof(People),compare);
    int count=0, j=0;
    People answer[m];
    for(int i=0; i<m; i++){
        char tmp[21];
        scanf("%s", tmp);
        if(Search(name,tmp,0,n-1)){
            count++;
            strcpy(answer[j++].name,tmp);
        }
    }
    qsort(answer,count,sizeof(People),compare);
    printf("%d\n",count);
    for(int i=0; i<count; i++){
        printf("%s\n", answer[i].name);
    }
    return 0;
}