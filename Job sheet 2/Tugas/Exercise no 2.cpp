#include <stdio.h>

int main() {
    char nama[100], nim[20], prodi[100], fakultas[100];
    float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    printf("Nama : ");
    scanf(" %[^\n]", nama); 
    printf("NIM : ");
    scanf(" %s", nim); 
    printf("Prodi : ");
    scanf(" %[^\n]", prodi); 
    printf("Fakultas : ");
    scanf(" %[^\n]", fakultas); 
    printf("Nilai Praktikum : ");
    scanf("%f", &nilaiPraktikum);
    printf("Nilai UTS : ");
    scanf("%f", &nilaiUTS);
    printf("Nilai UAS : ");	
    scanf("%f", &nilaiUAS);

    
    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUTS + 0.4 * nilaiUAS;

   
    printf("Nilai Akhir : %.2f\n", nilaiAkhir);

    return 0;
}

