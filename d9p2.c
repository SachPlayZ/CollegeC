#include <stdio.h>
#include <string.h>
struct Book {
    char name[100];
    char author[100];
    char publisher[100];
    float price;
    char branch[100];
};

void findPublisher(struct Book books[], int numBooks, const char* publisher) {
    printf("Books supplied by %s:\n", publisher);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].publisher, publisher) == 0) {
            printf("- %s by %s\n", books[i].name, books[i].author);
        }
    }
}

void findBranch(struct Book books[], int numBooks, const char* branch) {
    printf("Books under %s branch:\n", branch);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].branch, branch) == 0) {
            printf("- %s by %s\n", books[i].name, books[i].author);
        }
    }
}

int main() {
    struct Book books[100];
    int numBooks;

    printf("Enter the number of books: ");
    scanf("%d", &numBooks);

    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", books[i].name);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Publisher: ");
        scanf(" %[^\n]", books[i].publisher);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Branch: ");
        scanf(" %[^\n]", books[i].branch);
    }
    getchar();
    char publisher[100];
    printf("Enter the publisher name: ");
    scanf(" %[^\n]", publisher);
    findPublisher(books, numBooks, publisher);

    char branch[100];
    printf("Enter the branch name: ");
    scanf(" %[^\n]", branch);
    findBranch(books, numBooks, branch);

    return 0;
}