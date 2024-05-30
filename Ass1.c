/*Write a C program to display and find the sum of the series 1+11+111+....111 upto n. For
eg. if n=4, the series is : 1+11+111+1111. Take the value of 'n' as input from the user.*/


#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i;
    int sum=0;
    int num=0;
    for(i=0;i<n;i++){
        num=num*10+1;
        sum+=num;
    }
    printf("The sum of the series is: %d\n",sum);
    return 0;
}