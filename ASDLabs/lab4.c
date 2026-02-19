#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>   

    int dddvvv_firststovp(int *arr, int x1, int left1, int right1) {
        if (left1 > right1) {
            printf("Елемент не знайдено\n");
            return 0;
        }
        int mid1 = left1 + (right1 - left1) / 2;
        if (arr[mid1] == x1){
            printf("Результат знаходиться під номером %d\n", mid1+1);
            return 0;
        }
        if (arr[mid1] > x1) {
            left1 = mid1 + 1;
            dddvvv_firststovp(arr, x1, left1, right1);
        }
        if (arr[mid1] < x1) {
            right1 = mid1 - 1;
            dddvvv_firststovp(arr, x1, left1, right1);
        }
        return 0;
    }

int main() {

    srand(time(NULL));  
    
    int n, m;
    printf("Введіть висоту n матриці A[n,m]: ");
    scanf("%d", &n);
    printf("Введіть ширину m матриці A[n,m]: ");
    scanf("%d", &m);

    int matrixx[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrixx[i][j] = rand() % 7 - 3;
        }
    }

    int a;
    
    a = rand() % 10;                       // ПЕРШИЙ СТОВБЧИК
    matrixx[0][0] = a;
    for (int i = 1; i < n; i++) {
        a = rand() % 19 - 9;
        while (a > matrixx[i-1][0]) {
            a -= rand() % 3 + 1;
        }
        matrixx[i][0] = a;
    }

    for (int i = 1; i < m; i++) {               // ЛАСТ РЯДОК
        a = rand() % 19 - 9;
        while (a > matrixx[n-1][i-1]) {
            a -= rand() % 3 + 1;
        }
        matrixx[n-1][i] = a;
    }

    printf("Згенерована матриця A[n,m]:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d ", matrixx[i][j]);
        }
        printf("\n");
    }

    int x;
    printf("Введіть шуканий елемент: ");
    scanf("%d", &x);

    /* allocate array dynamically because VLAs cannot be initialized with an initializer */
    int *aa = malloc(n * sizeof *aa);
    if (aa == NULL) {
        fprintf(stderr, "Помилка виділення пам'яті\n");
        return 1;
    };
    for (int i = 0; i < n; i++) {
        aa[i] = matrixx[i][0];
    };

    int *bb = malloc(m * sizeof *bb);
    if (bb == NULL) {
        fprintf(stderr, "Помилка виділення пам'яті\n");
        return 1;
    };
    for (int i = 0; i < m; i++) {
        bb[i] = matrixx[n-1][i];
    };

    int left = 0;
    
    int rightaa = n - 1;
    int rightbb = m - 1;



    printf("Пошук у першому стовпчику:\n");
    dddvvv_firststovp (aa, x, left, rightaa);
    printf("Пошук у останньому рядку:\n");
    dddvvv_firststovp (bb, x, left, rightbb);
    free(aa);
    free(bb);
    return 0;
}