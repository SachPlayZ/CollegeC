#include <stdio.h>
#include <stdlib.h>
int* removeDuplicates(int* arr, int size, int* newSize) {
    int* temp = (int*)malloc(size * sizeof(int)); 
    int i, j, k;
    int duplicate;
    temp[0] = arr[0];
    k = 1;
    for (i = 1; i < size; i++) {
        duplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            temp[k] = arr[i];
            k++;
        }
    }
    *newSize = k;
    arr = (int*)realloc(arr, k * sizeof(int));
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    free(temp);

    return arr;
}

int main() {
    int size, newSize, i;
    int* arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    arr = removeDuplicates(arr, size, &newSize);
    printf("Array after removing duplicates:\n");
    for (i = 0; i < newSize; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}