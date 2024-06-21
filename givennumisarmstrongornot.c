#include <stdio.h>
#include <math.h>
int main(){
    int n,dig=0,orginal_number,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    orginal_number = n;
    while(orginal_number!=0){
        dig++;
        orginal_number/=10;
    }
    orginal_number=n;
    while(orginal_number!=0){
        int lb = orginal_number%10;
        sum += pow(lb,dig);
        orginal_number/=10;
    }
    if(sum==n){
        printf("its armstrong number");
    }else{
        printf("its not armstrong num");
    }
    return 0;
}