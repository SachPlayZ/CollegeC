#include <stdio.h>
void upcase(char *s) {
    if (*s == '\0') return;
    if (*s >= 'a' && *s <= 'z') *s -= 32;
    upcase(s + 1);
}
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%[^$]",s);
    upcase(s);
    printf("Uppercase: %s\n", s);
    return 0;
}