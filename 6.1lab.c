 #include <stdio.h>

int main() {
    int n = 3;
    int A[3][3];

    // Введення елементів матриці
    printf("Введіть елементи матриці A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Перетворення матриці
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                A[i][j] = 0;  // Заміна елементів бічної діагоналі нулями
            } else {
                A[i][j] = A[i][j] * A[i][j];  // Піднесення до квадрату інших елементів
            }
        }
    }

    // Виведення результату
    printf("Результат:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
