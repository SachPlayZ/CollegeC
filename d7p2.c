#include <stdio.h>
int sum(int n) {
    if (n == 0) return 0;
    int x;
    scanf("%d", &x);
    return x + sum(n - 1);
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Sum: %d\n", sum(n));
    return 0;
}