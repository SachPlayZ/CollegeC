#include<stdio.h>
#include<math.h>
int isArmstrong(int n){
    int temp = n, sum = 0, rem,c=0;
    while(temp > 0){
        c++;
        temp /= 10;
    }
    temp=n;
    while(temp > 0){
        rem = temp % 10;
        sum += pow(rem,c);
        temp /= 10;
    }
    return sum == n;
}
int isSpy(int n){
    int temp = n, sum = 0, prod = 1, rem;
    while(temp > 0){
        rem = temp % 10;
        sum += rem;
        prod *= rem;
        temp /= 10;
    }
    return sum == prod;
}
int isPalindrome(int n){
    int temp = n, rev = 0, rem;
    while(temp > 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return rev == n;
}
int factorial(int n){
    int fact = 1,i;
    for(i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int u,l,ch,n;
    while (1)
    {
    printf("1. Armstrong\n2. Spy\n3. Palindrome\n4. Factorial\n5. Exit Menu\nEnter your choice: ");
    scanf("%d", &ch);
    if(ch == 5){
        printf("Exiting...\n");
        return 0;
    }
    printf("Enter upper limit: ");
    scanf("%d", &u);
    printf("Enter lower limit: ");
    scanf("%d", &l);
    switch(ch){
        case 1: printf("Armstrong numbers between %d and %d are:\n", l, u);
                for(n = l; n <= u; n++){
                    if(isArmstrong(n)){
                        printf("%d\n", n);
                    }
                }
                break;
        case 2: printf("Spy numbers between %d and %d are:\n", l, u);
                for(n = l; n <= u; n++){
                    if(isSpy(n)){
                        printf("%d\n", n);
                    }
                }
                break;
        case 3: printf("Palindrome numbers between %d and %d are:\n", l, u);
                for(n = l; n <= u; n++){
                    if(isPalindrome(n)){
                        printf("%d\n", n);
                    }
                }
                break;
        case 4: printf("Factorials between %d and %d are:\n", l, u);
                for(n = l; n <= u; n++){
                    printf("%d! = %d\n", n, factorial(n));
                }
                break;
        default: printf("Invalid choice\n");
    
        }
    }
    return 0;
}