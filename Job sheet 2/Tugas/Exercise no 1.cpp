#include <stdio.h>

int main() {
    char nama[100]; 

    printf("Hello, siapa nama lengkapmu? \n");
    scanf("%[^\n]s", nama); 

    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}

