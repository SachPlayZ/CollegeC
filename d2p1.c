#include <stdio.h>
int main(){
    float cel;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel); 
    printf("The temperature in Fahrenheit is: %f", (cel * (float)9/5) + 32);
    return 0;
}