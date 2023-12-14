#include <stdio.h>


int calculate_discount(int total) {
    if (total > 3000000) {
        return total * 0.35;
    } else if (total > 1000000 && total <= 3000000) {
        return total * 0.2;
    } else {
        return 0;
    }
}

int main() {
    char nama[25];
    char nama_barang[50][25];
    int tipe_barang, harga, total = 0;


    printf("Nama: ");
    scanf("%24[^\n]", nama);
    printf("tipe barang: ");
    scanf("%i", &tipe_barang);

    for (int i = 0; i < tipe_barang; i++) {
        printf("Nama Barang: ");
        scanf(" %24[^\n]", nama_barang[i]);
        printf("harga: ");
        scanf("%i", &harga);
        total += harga;
    }

    printf("======================================================\n");
    printf("Total = %i\n\n", total);

    int discount = calculate_discount(total);
    int discountedPrice = total - discount;

    if (discount > 0) {
        printf("Congratulations %s, you got a %i%% discount\n", nama, (discount * 100) / total);
        printf("Price after discount = %i\n", discountedPrice);
    } else {
        printf("No discount available\n");
    }

    printf("Thank you :)\n");

    return 0;
}
