#include <stdio.h>

double approximate_sin(double x, int n) {
    if (n <= 0) return 0.0;

    double sum = 0.0;
    double term = x;

    for (int i = 1; i <= n; i++) {
        sum += term;

        double denominator = (2.0 * i) * (2.0 * i + 1.0);
        term *= (-x * x) / denominator;
    }

    return sum;
}

int main() {
    double x;
    int n;

    printf("Введіть значення x (в радіанах): ");
    scanf("%lf", &x);
    printf("Введіть кількість доданків n: ");
    scanf("%d", &n);

    double result = approximate_sin(x, n);

    printf("Результат апроксимації: %.10f\n", result);

    return 0;
}