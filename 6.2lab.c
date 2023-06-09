#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() {
    int matrix[SIZE][SIZE];
    int i, j;
    int min_element;

    // Ініціалізація генератора випадкових чисел
    srand(time(0));

    // Заповнення матриці випадковими числами
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 201 - 100; // rand() використовуємо для генерації випадкових чисел у діапазоні [-100, 100].
        }
    }

    // Виведення матриці на екран
    printf("Матриця:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Знаходження мінімального елемента
    min_element = matrix[1][0]; // Припускаємо, що перший елемент нижче головної діагоналі є мінімальним

    for (i = 1; i < SIZE; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
            }
        }
    }

    // Виведення результату
    printf("Мінімальний елемент серед елементів, що знаходяться нижче головної діагоналі: %d\n", min_element);//Зверніть увагу, що цей приклад розрахований на квадратну матрицю розміром 5x5. Якщо ви хочете працювати з матрицею іншого розміру, змініть значення константи SIZE та адаптуйте код програми відповідно.

    return 0;
}
