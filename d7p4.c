#include <stdio.h>

void concatenate(char *s11, char *s22) {
    while (*s11 != '\0')
        s11++;
    while (*s22 != '\0') 
        *s11++ = *s22++;
    *s11 = '\0';
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
