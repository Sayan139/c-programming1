#include <stdio.h>
int main(){
    int l,sum=0;
    printf("enter the limit of the series : ");
    scanf("%d",&l);
    for(int i=1; i<=l; i++){
        sum += i;
    }
    printf("the total sum of the numbers till n is : %d",sum);
}