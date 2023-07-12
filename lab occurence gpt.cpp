#include<stdio.h>

#define num 9

int main() {
    int a[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int count[num] = {0};  // Initialize count array to all zeros

    for (int i = 0; i < num; i++) {
        count[a[i]]++;  // Increment count for the corresponding number
    }

    for (int i = 0; i < num; i++) {
        if (count[i] > 0) {
            printf("%d occurs %d times\n", i, count[i]);
        }
    }

    return 0;
}
