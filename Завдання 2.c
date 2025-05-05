#include <stdio.h>

int main() {
    // Оголошення змінних
    double a = 4, b = -2, c = 20;
    double y;

    // Обчислення значення функції
    y = (a * b * c) / (a + b + c) - (a - b - c) / (a * b * c);

    // Виведення результату
    printf("Значення y: %lf\n", y);

    return 0;
}