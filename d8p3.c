#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    printf("Maximum element in the initial list: %d\n", max);

    int m;
    printf("Enter the number of additional integers: ");
    scanf("%d", &m);

    arr = (int *)realloc(arr, (n + m) * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!");
        return 1;
    }

    printf("Enter %d additional integers:\n", m);
    for (int i = n; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }

    max = findMax(arr, n + m);
    printf("Maximum element in the new list: %d\n", max);

    free(arr);
    return 0;
}