#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    double a;

    printf("Введіть x: ");
    scanf("%d", &x);

    printf("Введіть y: ");
    scanf("%d", &y);

    printf("Введіть z: ");
    scanf("%d", &z);

    a = (sqrt(x) + 2 * sqrt(y * z)) / (sqrt(y) - 2 * sqrt(x * z));

    printf("Значення a = %.2lf\n", a);

    return 0;
}
