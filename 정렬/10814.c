#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
}UserInfo;
int compare(const void *a, const void *b){
    UserInfo *ptr1=(UserInfo*)a;
    UserInfo *ptr2=(UserInfo*)b;
    return ptr1->age-ptr2->age;
}
int main(){
    int n;
    scanf("%d", &n);
    UserInfo user[n];
    for(int i=0; i<n; i++){
        scanf("%d %s", &user[i].age,user[i].name);
    }
    qsort(user,n,sizeof(UserInfo),compare);
    for(int i=0; i<n; i++){
        printf("%d %s\n", user[i].age,user[i].name);
    }
    return 0;
}