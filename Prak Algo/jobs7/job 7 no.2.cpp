#include <stdio.h>

int main() {
  // Inisialisasi variabel
  int n;
  char nama[10][100];

  // Masukan jumlah mahasiswa
  printf("Masukkan jumlah mahasiswa: ");
  scanf("%d", &n);

  // Masukan nama mahasiswa
  for (int i = 0; i < n; i++) {
    printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
    scanf("%s", nama[i]);
  }

  // Tampilkan keseluruhan elemen dari mahasiswa
  for (int i = 0; i < n; i++) {
    printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama[i]);
  }

  return 0;
}

