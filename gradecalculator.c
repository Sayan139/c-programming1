#include <stdio.h>
int main(){
    float sub1,sub2,sub3;
    printf("enter the marks of the first sub: ");
    scanf("%f",&sub1);
    printf("enter the marks of the second sub: ");
    scanf("%f",&sub2);
    printf("enter the marks of the third sub: ");
    scanf("%f",&sub3);
    int average = (sub1+sub2+sub3)/3.0;
    if(average >= 80  & average <=100){
        printf("GRADE-A");
    }else if(average >=70 & average <80){
        printf("GRADE-B");
    }else if(average >=60 & average <70){
        printf("GRADE-C");
    }else if(average < 60){
        printf("FAIL");
    }else{
        printf("invalid indput!");
    }
}