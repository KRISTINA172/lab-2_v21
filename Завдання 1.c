#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Введіть перше число: ");
    scanf("%d", &a);
    printf("Введіть друге число: ");
    scanf("%d", &b);

    // Обчислення
    int zalyshok = b % a;
    int tsila_chastyna = a / b;
    int dobutok = a * b;

    // Виведення
    printf("Залишок від ділення 2-го числа на 1-ше: %d\n", zalyshok);
    printf("Ціла частина від ділення 1-го числа на 2-ге: %d\n", tsila_chastyna);
    printf("Добуток чисел: %d\n", dobutok);

    return 0;
}
