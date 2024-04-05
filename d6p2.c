#include <stdio.h>

void encode(char text[], int code) {
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + (text[i] - 'A' + code) % 26;
            if (text[i] < 'A') {
                text[i] += 26;
            }
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + (text[i] - 'a' + code) % 26;
            if (text[i] < 'a') {
                text[i] += 26;
            }
        }
    }
}

void decode(char text[], int code) {
    encode(text, -code);
}

int main() {
    char text[100];
    int code;

    printf("Enter a line of text: ");
    scanf("%[^\n]", text);
    
    printf("Enter the code number: ");
    scanf("%d", &code);

    encode(text, code);
    printf("Encoded text: %s\n", text);

    decode(text, code);
    printf("Decoded text: %s\n", text);

    return 0;
}
