#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the number of the a : ");
    scanf("%d",&a);
    printf("enter the number of the b : ");
    scanf("%d",&b);
    printf("enter the number of the c : ");
    scanf("%d",&c);
    if(a>b & a>c){
        printf("a is greater than b and c");
    }else if(b>a & b>c){
        printf("b is greater than a and c");
    }else if(c>a & c>b){
        printf("c is greater than b and a");
    }
}