#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float dis;
    printf("Enter the coefficients of the quadratic equation a, b and c according to ax^2 + bx +c : ");
    scanf("%d %d %d", &a, &b, &c);
    dis = b*b - 4*a*c;
    if(dis > 0){
        printf("The roots are real and distinct\n");
        printf("The roots are: %f and %f", (-b + sqrt(dis))/(2*a), (-b - sqrt(dis))/(2*a));
    }
    else if(dis == 0){
        printf("The roots are real and equal\n");
        printf("The roots are: %f and %f", -b/(2.0f*a), -b/(2.0f*a));
    }
    else{
        printf("The roots are imaginary\n");
        printf("The roots are: %f + %fi and %f - %fi", -b/(2.0f*a), sqrt(-dis)/(2*a), -b/(2.0f*a), sqrt(-dis)/(2*a));
    }
    return 0;
}