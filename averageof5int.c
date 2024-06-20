#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    float average = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter the number for %c: ", 'a' + i);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 5.0;
    printf("The average is: %.2f\n", average);

    return 0;
}
