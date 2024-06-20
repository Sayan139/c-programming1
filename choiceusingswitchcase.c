#include <stdio.h>
int main(){
    char choice;
    printf("enter you choice between (a,b,c,d): ");
    scanf("%c",&choice);
    switch(choice){
        case 'a':
        printf("apple");
        case 'b':
        printf("ball");
        case 'c':
        printf("cat");
        case 'd':
        printf("dog");
    }
}