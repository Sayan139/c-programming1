#include <stdio.h>
int main(){
    float a,b;
    printf("enter the number of the a: ");
    scanf("%f",&a);
    printf("enter the number of the b: ");
    scanf("%f",&b);
    printf("the addition of the number: %f \n",a+b);
    printf("the subtraction of the number: %f \n",a-b);
    printf("the multiplication of the two number: %f \n",a*b);
    printf("the division is: %f \n",a/b);
    printf("the actual division of the numbers are: %d \n",(int)(a/b));
    printf("the module of the two number is : %f \n",(int)a%(int)b);
}