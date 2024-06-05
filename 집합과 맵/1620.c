#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASH 100000
typedef struct Book1
{
    int num;
    char name[21];
}Book1;
typedef struct Book2
{
    int num;
    char name[21];
}Book2;
int Search(Book2 *arr, char *target, int l, int r){
    if(l>r) return -1;
    else{
        int m=(l+r)/2;
        char mid[21];
        strcpy(mid,arr[m].name);
        if(strcmp(target,mid)<0) return Search(arr,target,l,m-1);
        else if(strcmp(target,mid)>0) return Search(arr,target,m+1,r);
        else return m;
    }
}
int compare(const void *a, const void *b){
    Book2 *ptr1=(Book2 *)a;
    Book2 *ptr2=(Book2 *)b;
    return strcmp(ptr1->name,ptr2->name);
}
int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    Book1 book1[n];
    Book2 book2[n];
    for(int i=0; i<n; i++){
        scanf("%s", book1[i].name);
        book1[i].num=i+1;
        book2[i].num=i+1;
        strcpy(book2[i].name, book1[i].name);
    }
    qsort(book2,n,sizeof(Book2),compare);
    for(int i=0; i<m; i++){
        char tmp[21];
        scanf("%s", tmp);
        if(tmp[0]>='0' && tmp[0]<='9'){
            int idx=atoi(tmp);
            printf("%s\n", book1[idx-1].name);
        }
        else{
            int idx=Search(book2,tmp,0,n-1);
            printf("%d\n", book2[idx].num);
        }
    }
    return 0;
}