/*
Nama  : Faza Azka Mahasya
NIM   : 23343038
Prodi : Informatikaa
*/
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() {
    enum hari sekarang;
    sekarang = RABU;
    printf("ukuran variabel enum %d byte", sizeof(sekarang));
}


