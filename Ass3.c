#include<stdio.h>
#include<math.h>
int isprime(int n){
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int uglyprime(int n){
    int i;
    int count=0;
    for(i=2;i<=n;i++){
        if(isprime(i)){
            int temp=i;
            while(temp%2==0)
                temp/=2;
            while(temp%3==0)
                temp/=3;
            while(temp%5==0)
                temp/=5;
            if(temp==1)
                count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The number of ugly prime numbers from 1 to %d is: %d\n",n,uglyprime(n));
    return 0;
}
