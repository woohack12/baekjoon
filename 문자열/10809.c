#include <stdio.h>

int main()
{
    char str[101]; //입력한 문자를 담을 문자열
    int num[26]; //알파벳 소문자들의 처음 위치를 담을 배열
    
    scanf("%s", str);
    for(int i=0; i<26; i++) //각 알파벳들이 처음 등장하는 위치를 찾기 위한 반복문
    {
        int tmp=-1; 
        num[i]=tmp;  //기본 위치를 -1로 초기화
        for(int j=0; str[j]!=0; j++) //입력한 문자열을 확인
        {
            if(str[j]==i+97)    //알파벳 소문자를 아스키코드 값으로 변환해서 처음 위치를 찾음
            {
            tmp=j;  //현재 위치에 찾고있던 알파벳이 있다면 현재 위치를 tmp에 담고 문자열 탐색 종료
            break;  
            }
        }
        num[i]=tmp; //해당 알파벳이 처음 나온 위치를 숫자배열에 넣어줌
        printf("%d ", num[i]); //그리고 출력
    }
    printf("\n");
    return 0;
}