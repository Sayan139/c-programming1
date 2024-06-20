#include <stdio.h>
int main(){
    int n,x,power=1;
    printf("enter the number you want the power of: ");
    scanf("%d",&n);
    printf("enter the power of the number: ");
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
        power *= n;
    }
    printf("the power of the number is : %d",power);
}