/*Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum of
the proper divisors (not including itself) of one number is equal to the other number and
vice – versa.
For example 220 &amp; 284 are Amicable numbers. First we find the proper divisors of 220:
220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110
1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
Now, 284: 1, 2, 4, 71, 142
1 + 2 + 4 + 71 + 142 = 220
Write a C program to check that the input pair of numbers is Amicable.*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int i;
    int sum1=0;
    int sum2=0;
    for(i=1;i<a;i++)
        if(a%i==0)
            sum1+=i;
    for(i=1;i<b;i++)
        if(b%i==0)
            sum2+=i;
    if(sum1==b && sum2==a)
        printf("The numbers are amicable\n");
    else
        printf("The numbers are not amicable\n");
    return 0;
}