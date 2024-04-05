#include<stdio.h>
int main(){
    int N,sum=0;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        sum+=2*i+1;
    }
    printf("Sum of first %d terms of the series : %d", N, sum);
}