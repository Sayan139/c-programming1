#include <stdio.h>
int main(){
    int month;
    printf("enter the number: ");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("january");
        break;
        case 2:
        printf("february \n");
        break;
        case 3:
        printf("march \n");
        case 4:
        printf("april \n");
        case 5:
        printf("may \n");
        case 6:
        printf("june \n");
        case 7:
        printf("july \n");
        case 8:
        printf("august \n");
        case 9:
        printf("september \n");
        case 10:
        printf("october");
        break;
        case 11:
        printf("november");
        break;
        case 12:
        printf("december");
        break;
    }
}