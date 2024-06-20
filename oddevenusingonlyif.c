#include <stdio.h>
int main(){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    if(a%2==0){
        printf("its even ");
    }if(a%2!=0){
        printf("its odd");
    }
}