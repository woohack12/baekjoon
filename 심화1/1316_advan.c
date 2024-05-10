#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int character[26]={0};
    int num;
    scanf("%d", &num);
    int result=num;
    for(int i=0; i<num; i++){
        scanf("%s", str);
        character[str[0]-97]=1;
        int j=1;
        int check=0;
        while(str[j]!=0){
            if(str[j]==str[j-1])
            j++;
            else{
                character[str[j]-97]++;
                j++;
            }
            for(int k=0; k<26; k++){
                if(character[k]==2){
                    check=-1;
                    break;
                }
            }
            if(check==-1){
                result--;
                break;
            }
        }
        memset(character,0,sizeof(int)*26);
    }
    printf("%d\n", result);
    return 0;
}