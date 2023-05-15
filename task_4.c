// обчислення виразу
#include <stdio.h>

int main()
{
   double x, y, result;//введення змінних

   printf("Введіть x: ");
   scanf("%lf", &x);
   printf("Введіть y: ");
   scanf("%lf", &y);//введення даних
  if (y == -2) {
        printf("Помилка: ділення на нуль\n");//перевірка значення 
    } else {
        result = x * x + (2 * x - 10) / (y + 2);
        printf("Result: %.2f\n", result);//результат 
    }
   return 0;
}