#include <stdio.h>

int main() {
    int num1, num2, product;

    // Введення чисел
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);

    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);

    // Обчислення добутку
    product = num1 * num2;

    // Виведення результату
    printf("Добуток чисел %d і %d дорівнює: %d\n", num1, num2, product);

    return 0;
}
