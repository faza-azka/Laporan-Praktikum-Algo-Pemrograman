#include <stdio.h>
#include <string.h>

int main() {
    char text[25];

    printf("Masukan Teks : ");
    scanf("%[^\n]", text);

    int length = strlen(text);
    char* ptr = text + length - 1;

    for (; ptr >= text; ptr--) {
        char* subPtr = ptr;
        while (*subPtr != '\0') {
            printf("%c", *subPtr);
            subPtr++;
        }
        printf("\n");
    }

    return 0;
}
