#include <stdio.h>
#include <math.h>
int max(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int min(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
float avg(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return (float)sum / n;
}
float std(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    float avg = sum / n;
    float sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 += (a[i] - avg) * (a[i] - avg);
    }
    return sqrt(sum2 / n);
}
int main()
{
    int n, ch;
    int arr[10];
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("1. Find maximum\n2. Find minimum\n3. Find average\n4. Find standard deviation\n");
    printf("Enter your choice:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Maximum element: %d\n", max(arr, n));
        break;
    case 2:
        printf("Minimum element: %d\n", min(arr, n));
        break;
    case 3:
        printf("Average: %.2f\n", avg(arr, n));
        break;
    case 4:
        printf("Standard deviation: %.2f\n", std(arr, n));
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}