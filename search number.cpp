#include <stdio.h>

void findIndex(int arr[][100], int rows, int cols, int num) {
    int i, j;
    int found = 0;

     
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] == num) {
                printf("Number %d found at row %d and column %d.\n", num, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", num);
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[100][100];
    int i, j;

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);

    findIndex(array, rows, cols, num);

    return 0;
}
