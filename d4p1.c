#include<stdio.h>
int main(){
    int num, c=0, digit, sum=0, temp, rev=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while(temp>0){
        digit = temp%10;
        sum = sum + digit;
        rev= rev*10 + digit;
        temp = temp/10;
        c++;
    }
    if(num == rev){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
    printf("The number of digits in the number is : %d\n", c);
    printf("The sum of the digits of the number is : %d\n", sum);
    return 0;
}