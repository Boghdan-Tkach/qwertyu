#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int operations = 0;
    double result = 1.0; 
    double cumulative_sum = 0.0;
    double term;
    
    printf("Введіть число n: ");
    scanf("%d", &n); 
    printf("Ви ввели: %d\n", n);
    
    for (int i = 1; i <= n; i++) {
        cumulative_sum += sin(i); 
        operations++;
        double denominator = cos(i) + 1.0;
        operations++;

        term = cumulative_sum / denominator;
        operations++;
        result *= term;
        operations++;
        
        printf("\nЦикл i=%d:\n", i);
        printf("  накопичена сума: %.7f\n", cumulative_sum);
        printf("  i-й член добутку: %.7f\n", term);
        printf("  Поточний результат P: %.7f\n", result);
    }
    
    printf("Pезультат = %.7f\n", result);
    printf("Кількість операцій: %d\n", operations);
    
    return 0;
}