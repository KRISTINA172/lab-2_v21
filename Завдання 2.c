#include <stdio.h>

int main() {
    // Задані величини
    double a = 4, b = -2, c = 20;

    // Обчислення значення функції
    double y = (a * b * c) / (a + b + c) - (a - b - c) / (a * b * c);

    // Виведення результату на екран
    printf("Значення функції y: %lf\n", y);

    return 0;
}

