#include<stdio.h>
#include<math.h>
int main(){
    int n,x,i,fact=1;
    float sum=1;
    printf("Enter the value of X : ");
    scanf("%d", &x);
    printf("Enter the value of N : ");
    scanf("%d", &n);
    for(i=1;i<=n-1;i++){
        fact = fact * i;
        sum = sum + pow(-x,i)/(float)fact;
    }
    printf("The sum of the series is : %.2f\n", sum);
    return 0;
}