#include <stdio.h>

int main() {
  // Deklarasi variabel
  float kehadiran, tugas, uts, uas, nilai_akhir;
  char keterangan;

  // Menerima input dari pengguna
  printf("Masukkan nilai kehadiran: ");
  scanf("%f", &kehadiran);
  printf("Masukkan nilai tugas: ");
  scanf("%f", &tugas);
  printf("Masukkan nilai UTS: ");
  scanf("%f", &uts);
  printf("Masukkan nilai UAS: ");
  scanf("%f", &uas);

  // Menghitung nilai akhir
  nilai_akhir = (kehadiran * 0.2) + (tugas * 0.2) + (uts * 0.25) + (uas * 0.35);

  // Menentukan keterangan kelulusan
  if (nilai_akhir <= 44) {
    keterangan = 'E';
  } else if (nilai_akhir <= 55) {
    keterangan = 'D';
  } else if (nilai_akhir <= 65) {
    keterangan = 'C';
  } else if (nilai_akhir <= 75) {
    keterangan = 'B';
  } else if (nilai_akhir <= 80) {
    keterangan = 'B';
  } else if (nilai_akhir <= 85) {
    keterangan = 'A';
  } else {
    keterangan = 'A';
  }

  // Menampilkan hasil
  printf("Nilai akhir: %.2f\n", nilai_akhir);
  printf("Keterangan: %c\n", keterangan);

  // Menampilkan keterangan kelulusan
  if (keterangan == 'E') {
    printf("Maaf, anda tidak lulus!");
  } else if (keterangan == 'D') {
    printf("Anda lulus, tingkatkan lagi untuk kedepannya!");
  } else if (keterangan == 'C') {
    printf("Anda lulus dengan baik, tingkatkan terus belajarnya!");
  } else if (keterangan == 'B') {
    printf("Selamat! Anda lulus dengan nilai yang baik!");
  } else if (keterangan == 'A') {
    printf("Selamat! Anda lulus dengan nilai yang sangat baik!");
  }

  return 0;
}

