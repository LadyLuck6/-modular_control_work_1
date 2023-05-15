#include <stdio.h>
#include <math.h>

int main() {
    double a, x, y;

    printf("Введіть a: ");
    scanf("%lf", &a);

    printf("Введіть x: ");
    scanf("%lf", &x);

    printf("Введіть y: ");
    scanf("%lf", &y);

   double lower_bound = fmin(x, y);
   double upper_bound = fmax(x, y);//функції для визначення мінімального (lower_bound) і максимального (upper_bound) значень

    if (a >= lower_bound && a <= upper_bound) {
        printf("Значення %.2f належить інтервалу[%.2f, %.2f]\n", a, x, y);
    } else {
        printf("Значення %.2f не належить інтервалу [%.2f, %.2f]\n", a, x, y);
    }

    return 0;
}