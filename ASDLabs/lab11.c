#include <stdio.h>

int main(void) {

    printf("Введіть число: ");
    int x;
    scanf("%i", &x);

    if (x >= 8)
    {
        if (x < 23)
        {
            x = x * x * x * (-5) + 10;
        }
    }
    else if (x < -19)
    {
        x = 2 * x * x * x + 8 * x * x;
    }
    else if (x > -3)
    {
        if (x <= 0)
        {
            x = 2 * x * x * x + 8 * x * x;
        }
    }
    printf("Результат: у = %i\n", x);
    return 0;
}