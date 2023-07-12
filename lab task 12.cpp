#include<stdio.h>

int main() {
    int num = 5;
    int a[num], b[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }

                                                        
    for (int i = 0; i < num; i++) {
        int isDifferent = 1;  // Assume different unless found equal
        for (int j = 0; j < num; j++) {
            if (a[i] == b[j]) {
                isDifferent = 0;  // Found equal, not different
                break;
            }
        }
        if (isDifferent) {
          
            printf("%d is different\n", a[i]);
        }
    }}
