#include <stdio.h>
#include <string.h>

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function prototypes
int pilihan(int input, int *saldo);

int main() {
    // Deklarasi
    int input, saldo = 175000;
    char nama[50];

    // Interface
    printf("=======================ATM=======================\n");
    printf("\t\tPetunjuk penggunaan\n");
    printf("Pilihlah antara pilihan berikut yang ingin anda lakukan\n");
    printf("1). Cek Saldo\n2). Setoran\n3). Penarikan Tunai\n4). Exit\n");
    printf("=================================================\n");
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;
    printf("Pilihan Anda: ");
    scanf("%d", &input);
    clearInputBuffer(); // Clear input buffer

    // Statement
    while (input != 4) {
        pilihan(input, &saldo);
        printf("\n\nPilihan Anda: ");
        scanf("%d", &input);
        clearInputBuffer(); // Clear input buffer
    }
    printf("Terima Kasih");

    return 0;
}

int pilihan(int input, int *saldo) {
    switch (input) {
        case 1:
            printf("---------Cek Saldo---------\n");
            printf("Saldo: %d", *saldo);
            break;

        case 2:
            printf("--------Setor Tunai--------\n");
            int setor;
            printf("Jumlah Setoran: ");
            scanf("%d", &setor);
            *saldo = *saldo + setor;
            printf("Saldo: %d", *saldo);
            break;

        case 3:
            printf("------Penarikan Tunai------\n");
            int tarik;
            printf("Jumlah Penarikan: ");
            scanf("%d", &tarik);
            *saldo = *saldo - tarik;
            if (*saldo < 50000) {
                printf("Maaf, saldo minimal di dalam akun minimal Rp. 50000");
                *saldo = *saldo + tarik;
                break;
            }
            printf("Saldo: %d", *saldo);
            break;

        default:
            printf("Mohon maaf, pilihan tersebut tidak ada");
    }

    return 1;
}

