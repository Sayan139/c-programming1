#include <stdio.h>
int main(){
    int a,b;
    int additionofaandb,subtractionofaandb;
    printf("enter the value of the a: ");
    scanf("%d",&a);
    printf("enter the value of the b: ");
    scanf("%d",&b);
    additionofaandb=a+b;
    subtractionofaandb=a-b;
    printf("the value of the equation : (a^2-b^2) : %d \n",(a*a)-(b*b));
    printf("the value of the equation : (a+b)^3 : %d \n",additionofaandb*additionofaandb*additionofaandb);
    printf("the value of the equation : (a+B)^2 : %d \n",additionofaandb*additionofaandb);
    printf("the value of the equation : (a-b)^2 : %d \n",subtractionofaandb*subtractionofaandb);
}