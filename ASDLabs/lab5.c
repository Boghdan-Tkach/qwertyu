#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quickSortDiagonal(int A[][10], int left, int right) {
    int i = left;
    int j = right;
    int pivot = A[(left + right) / 2][(left + right) / 2];

    while (i <= j) {
        while (A[i][i] < pivot)
            i++;
        while (A[j][j] > pivot)
            j--;

        if (i <= j) {
            int temp = A[i][i];
            A[i][i] = A[j][j];
            A[j][j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
        quickSortDiagonal(A, left, j);
    if (i < right)
        quickSortDiagonal(A, i, right);
}

void printMatrix(int A[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int A[10][10];

    srand(time(NULL));

    do {
        printf("Введiть розмiр матрицi (7..10): ");
        scanf("%d", &n);
    } while (n < 7 || n > 10);

    printf("\nПочаткова матриця:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;
        }
    }

    printMatrix(A, n);

    quickSortDiagonal(A, 0, n - 1);

    printf("\nМатриця пiсля сортування головної дiагоналi:\n");
    printMatrix(A, n);

    return 0;
}
