#include <stdio.h>

int main() {
    double a, x, y;

    printf("Введіть значення a: ");
    scanf("%lf", &a);

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    printf("Введіть значення y: ");
    scanf("%lf", &y);

    if (a >= x && a <= y) {
        printf("Значення a попадає в інтервал [%.2f, %.2f]\n", x, y);
    } else {
        printf("Значення a не попадає в інтервал [%.2f, %.2f]\n", x, y);
    }

    return 0;
}
