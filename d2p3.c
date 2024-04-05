#include <stdio.h>
int main(){
    int marks;
    printf("Enter student's marks in a subject (out of 100): ");
    scanf("%d", &marks);
    if(marks<=100 && marks >= 90)
        printf("Grade O");
    else if(marks<=89 && marks >= 80)
        printf("Grade E");
    else if(marks<=79 && marks >= 70)
        printf("Grade A");
    else if(marks<=69 && marks >= 60)
        printf("Grade B");
    else if(marks<=59 && marks >= 40)
        printf("Grade C");
    else if(marks<=49 && marks >= 40)
        printf("Grade D");
    else if(marks<40 && marks >= 0)
        printf("Grade F");
    else
        printf("Invalid marks entered");
    return 0;
}