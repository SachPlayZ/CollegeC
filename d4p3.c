#include<stdio.h>
#include<limits.h>
int main(){
    int i,num,fact=1;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
        fact*=i;
    printf("Factorial of %d is %d\n",num,fact);
    if (num>12)
        printf("The given factorial is wrong because it is out of range as it is more than %d which is the limit of int datatype",INT_MAX);
    return 0;
}