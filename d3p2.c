#include<stdio.h>
int main(){
    float a,b;
    int choice;
    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);
    printf("Mathematical Operations\n1- Add\n2- Subtract\n3- Multiply\n4- Divide\nEnter your preference: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Answer : %f", a+b);
            break;
        case 2:
            printf("Answer : %f", a-b);
            break;
        case 3:
            printf("Answer : %f", a*b);
            break;
        case 4:
            printf("Answer : %f", a/b);
            break;
        default:
            printf("Invalid choice");
    }
}