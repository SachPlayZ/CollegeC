#include <stdio.h>

void concatenate(char *s1, char *s2) {
    while (*s1 != '\0')
        s1++;
    while (*s2 != '\0') 
        *s1++ = *s2++;
    *s1 = '\0';
}

int main() {
    char s1[100], s2[100];
    printf("Enter two strings: ");
    scanf("%[^\n]", s1);
    getchar(); 
    scanf("%[^\n]", s2);
    
    concatenate(s1, s2);
    printf("Concatenated: %s\n", s1);
    
    return 0;
}
