#include <stdio.h>
void averageof3(int *a1,int *b1,int *c1,int *sum1){
    *sum1 = (*a1+*b1+*c1)/3.0;
}
int main(){
    int a,b,c,average;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);
    averageof3(&a,&b,&c,&average);
    printf("the avergae of the 3 num is : %d",average);
}