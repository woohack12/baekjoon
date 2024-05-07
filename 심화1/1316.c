#include <stdio.h>
#include <string.h>

int main()
{
    int num=0;
    int num_res=0;
    char str[101]={0,};
    char tmp_str[101]={0,};
    char c;
    scanf("%d", &num);
    num_res=num;
    for(int i=0; i<num; i++){
        scanf("%s", str);
        tmp_str[0]=str[0];
        int n=0;
        for(int j=0; str[j]!=0; j++){   //중복돤 문자를 제거한 새로운 문자열을 tmp_str에 넣음
            if(tmp_str[n]!=str[j]){
                n++;
                tmp_str[n]=str[j];
            }
        }
        int j=0;
        for(int j=0; tmp_str[j]!=0; j++){
            int check=0;
            c=tmp_str[j];
            for(int k=j+1; tmp_str[k]; k++){
                if(c==tmp_str[k]){
                    check=-1;
                    num_res--;
                    break;
                }
            }
            if(check==-1)
            break;
        }
    }
    printf("%d\n", num_res);
    return 0;
}