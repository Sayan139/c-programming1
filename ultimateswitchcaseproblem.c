#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            int n;
            printf("Enter the number: ");
            scanf("%d", &n);
            printf("The square of the number: %d\n", n * n);
            printf("The square root of the number: %f\n", sqrt(n));
            break;
        }
        case 2: {
            int a, b, c, d;
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            printf("Enter the third number: ");
            scanf("%d", &c);
            printf("Enter the fourth number: ");
            scanf("%d", &d);
            if (a > b && a > c && a > d) {
                printf("%d is the largest number\n", a);
            } else if (b > a && b > c && b > d) {
                printf("%d is the largest number\n", b);
            } else if (c > a && c > b && c > d) {
                printf("%d is the largest number\n", c);
            } else {
                printf("%d is the largest number\n", d);
            }
            break;
        }
        case 3: {
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
            break;
        }
        case 4: {
            int a, b;
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            printf("The formula of the equation (a + b)^2: %d\n", (a + b) * (a + b));
            break;
        }
        case 5: {
            int l, b, r;
            printf("Enter the length of the rectangle: ");
            scanf("%d", &l);
            printf("Enter the breadth of the rectangle: ");
            scanf("%d", &b);
            printf("Enter the radius of the circle: ");
            scanf("%d", &r);
            printf("The area of the rectangle is: %d\n", l * b);
            printf("The area of the circle is: %f\n", 3.14 * (r * r));
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
