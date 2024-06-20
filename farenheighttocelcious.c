#include <stdio.h>
int main(){
    float farenheight;
    printf("enter the value of the farenheight: ");
    scanf("%f",&farenheight);
    float celcious = (farenheight - 32) * 5 / 9;
    printf("the value of the farenheight temp in celcious: %f",celcious); 
}