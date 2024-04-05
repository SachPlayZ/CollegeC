#include<stdio.h>
#include<math.h>
int main() {
    printf("Enter three sides of a triangle : ");
    int a, b, c;
    float area, s;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b) {
        if(a==b && b==c)
            printf("Equilateral Triangle");
        else if(a==b || b==c || c==a)
            printf("Isosceles Triangle");
        else {
            printf("Scalene Triangle\n");
            if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) 
                printf("Right Angled Triangle");
            else
                printf("Not a Right Angled Triangle");
        }
        s = (a+b+c)/2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\nArea of the triangle : %.2f\n", area);
    } else {
        printf("Not a Triangle");
    }
    return 0;
}
