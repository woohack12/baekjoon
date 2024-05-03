#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    int num[26][1]={0};
    int len_str;
    int max=0;
    int max_str=0;
    scanf("%s", str);
    len_str=strlen(str);    //입력한 단어의 길이
    for(int i=0; i<len_str; i++)    //소문자들을 대문자로 변환
    {
        if(str[i]>96 && str[i]<123)
        str[i]-=32;
    }
    for(int i=0; i<len_str; i++)    //단어에 들어간 알파벳에 따라 2차원 배열의 값이 1씩 증가
    {
        for(int j=0; j<26; j++)
        {
            if(str[i]==j+65)
            num[j][0]++;
            if(max<num[j][0])   //그리고 그중 가장 많이 나온 배열의 값을 max에 저장
            max=num[j][0];
        }
    }
    for(int i=0; i<26; i++) //max의 값을 가지고 있는 2차원 배열을 찾기&최댓값 중복확인
    {
        if(num[i][0]==max)
        {
            max_str=i;
            for(int j=i+1; j<26; j++)
            {
                if(num[max_str][0]==num[j][0])
                {
                    printf("?\n");
                    return 0;
                }
            }
            break;
        }
    }
    printf("%c\n", max_str+65);
    return 0;
}