#include <stdio.h>
int main(int argc, char* argv[]){
    FILE *fp;
    char c;
    int ch=0,li=1,wd=0;
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF) {
        ch++;
        if (c == '\n') {
            li++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            wd++;
        }
    }
    printf("Characters: %d\n", ch);
    printf("Lines: %d\n", li);
    printf("Words: %d\n", wd);
    fclose(fp);
    return 0;
}