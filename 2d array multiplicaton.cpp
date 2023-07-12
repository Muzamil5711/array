#include <stdio.h>

void multiplyArrays(int arr1[][100], int arr2[][100], int n) {
    int result[100][100] = {0};
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the result
    printf("Result:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int array1[100][100];
    int array2[100][100];
    int i, j;

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    multiplyArrays(array1, array2, n);

    return 0;
}
