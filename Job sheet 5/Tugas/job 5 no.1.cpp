#include <stdio.h>

int main() {
  int a, b, hasil;
  char pilihan;

  printf("Pilih operasi: \n");
  printf("a. Penjumlahan\n");
  printf("b. Pengurangan\n");
  printf("c. Perkalian\n");
  printf("d. Pembagian\n");
  printf("e. Hasil Bagi\n");
  printf("Pilihan: ");
  scanf("%c", &pilihan);

  switch (pilihan) {
  case 'a':
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    hasil = a + b;
    printf("Hasil: %d\n", hasil);
    break;
  case 'b':
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    hasil = a - b;
    printf("Hasil: %d\n", hasil);
    break;
  case 'c':
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    hasil = a * b;
    printf("Hasil: %d\n", hasil);
    break;
  case 'd':
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    hasil = a / b;
    printf("Hasil: %d\n", hasil);
    break;
  case 'e':
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    hasil = a % b;
    printf("Hasil: %d\n", hasil);
    break;
  default:
    printf("Pilihan tidak valid.\n");
    break;
  }

  return 0;
}

