#include <stdio.h>
#include <string.h>
int main(){
    int sum_subject=0; //총 과목 수
    double res=0;    //전공평점
    char str_grade[20][3];  //입력받을 성적
    char subject[20][51];   //입력받을 과목 이름
    char *grade[10]={"A+","A0","B+","B0","C+","C0","D+","D0","F","P"};
    double time[20]; //학점
    for(int i=0; i<20; i++){
        scanf("%s%lf%s", subject[i],&time[i],str_grade[i]);
        if(strcmp(str_grade[i],grade[9])!=0)
        sum_subject+=time[i];
        double temp=4.5;
        for(int j=0; j<9; j++){
            if(strcmp(str_grade[i],grade[8])==0){
                break;
            }
            if(strcmp(str_grade[i],grade[j])==0){
                res+=temp*time[i];
                break;
            }
            else{
                temp-=0.5;
            }
        }
    }
    printf("%lf\n",res/sum_subject);
    return 0;
}