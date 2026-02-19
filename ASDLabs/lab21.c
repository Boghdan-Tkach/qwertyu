#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int operations=0;
    double summ; 
    double dobb;
    double result = 1.0; 
    printf("Введіть число n: ");
    scanf("%d", &n); //кількість множень
    printf("Ви ввели: %d\n", n);
    
    for (int i = 1; i <= n; i++) {//множення
        printf("цикл множення %d\n", i);
        summ=0.0;
        
        for (int j = 1; j <= i; j++) {//сума
            summ+=sin(j);
            operations++;
            printf("Сума синусів від 0 до %d: %.7f\n", j, summ); 
        } 

        dobb=summ/(cos(i)+1);
        operations++;
        printf("Різниця суми синусів на косинус %d: %.7f\n", i+1, dobb); 
        
        result*=dobb;
        operations++;
        printf("Поточний результат множення: %.7f\n", result);
    } 
    
    printf("Кінцевий результат P: %.7f\n", result);
    printf("Кількість операцій: %d\n", operations);
    return 0;
}

