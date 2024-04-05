#include <stdio.h>
int main(){
    char s1[100], s2[100];
    printf("Enter two strings: ");
    scanf("%[^\n]", s1);
    getchar(); 
    scanf("%[^\n]", s2);
    printf("Concatenated: %s%s\n", s1, s2);
    return 0;
}