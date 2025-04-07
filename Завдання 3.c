#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z; // Вхідні змінні
    double numerator, denominator, result;

    // Введення даних із супровідними текстами
    printf("Введіть значення для x: ");
    scanf("%lf", &x);
    printf("Введіть значення для y: ");
    scanf("%lf", &y);
    printf("Введіть значення для z: ");
    scanf("%lf", &z);

    // Обчислення чисельника та знаменника
    numerator = sqrt(x) + 2 * sqrt(y * z);
    denominator = sqrt(y) - 2 * sqrt(x * z);

    // Перевірка на помилку ділення на нуль
    if (denominator == 0) {
        printf("Помилка: знаменник дорівнює нулю, неможливо виконати ділення!\n");
        return 1; // Завершення програми з кодом помилки
    }

    // Обчислення результату
    result = numerator / denominator;

    // Виведення результату із пояснювальним текстом
    printf("Результат обчислення виразу: %.2lf\n", result);

    return 0;
}