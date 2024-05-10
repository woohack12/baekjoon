#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    int num1[n][m];
    int num2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            scanf("%d", &num1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            scanf("%d", &num2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            printf("%d ",num1[i][j]+num2[i][j]);
        }
        printf("\n");
    }
    return 0;
}