#include <stdio.h>

int main() {
  // Deklarasi variabel
  float r, s, p, l, w, t;
  char pilihan;

  // Menampilkan menu pilihan
  printf("Pilih bangun ruang: \n");
  printf("a. Bola\n");
  printf("b. Kubus\n");
  printf("c. Balok\n");
  printf("d. Tabung\n");
  printf("Pilihan: ");
  scanf("%c", &pilihan);

  // Menghitung luas permukaan
  switch (pilihan) {
  case 'a':
    // Bola
    printf("Masukkan jari-jari bola: ");
    scanf("%f", &r);
    printf("Luas permukaan bola: %f\n", 4 * 3.1415 * r * r);
    break;
  case 'b':
    // Kubus
    printf("Masukkan sisi kubus: ");
    scanf("%f", &s);
    printf("Luas permukaan kubus: %f\n", 6 * s * s);
    break;
  case 'c':
    // Balok
    printf("Masukkan panjang balok: ");
    scanf("%f", &l);
    printf("Masukkan lebar balok: ");
    scanf("%f", &w);
    printf("Masukkan tinggi balok: ");
    scanf("%f", &t);
    printf("Luas permukaan balok: %f\n", 2 * (l * w + l * t + w * t));
    break;
  case 'd':
    // Tabung
    printf("Masukkan jari-jari tabung: ");
    scanf("%f", &r);
    printf("Masukkan tinggi tabung: ");
    scanf("%f", &t);
    printf("Luas permukaan tabung: %f\n", 2 * 3.1415 * r * (r + t));
    break;
  default:
    printf("Pilihan tidak valid.\n");
    break;
  }

  return 0;
}

