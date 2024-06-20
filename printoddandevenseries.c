#include <stdio.h>
int main(){
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("The even series: ");
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }
    printf("\nThe odd series: ");
    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) printf("%d ", i);
    }
    printf("\n");
}