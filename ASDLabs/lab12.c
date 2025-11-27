#include <stdio.h>

int main(void){
    
    printf("Введіть число: ");
    int x;
    scanf("%i", &x);

    if (x >= 8 && x < 23)
    {
        x = x * x * x * (-5) + 10;
    }
    else if (x < -19 || (x > -3 && x <= 0))
    {
        x = 2 * x * x * x + 8 * x * x;
    }
    printf("Результат: %i\n", x);
    return 0;
}