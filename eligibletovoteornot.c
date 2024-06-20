#include <stdio.h>
int main(){
    int age ;
    printf("enter the age of the candidate : ");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible to vote ");
    }else{
        printf("not eligible to vote");
    }
}