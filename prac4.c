#include <stdio.h>
int main(){
    char c1[1000];
    printf("Enter the string: ");
    scanf("%[^\n]", c1);
    getchar();
    int up = 0,low = 0;
    for(int i = 0; c1[i] != '\0'; i++){
        if(c1[i] >= 'A' && c1[i] <= 'Z'){
            up++;
        }
        else if(c1[i] >= 'a' && c1[i] <= 'z'){
            low++;
        }
    }
    printf("The number of uppercase characters in the string is: %d\n", up);
    printf("The number of lowercase characters in the string is: %d\n", low);
    return 0;
}