#include <stdio.h>
#define PI 3.14159

void circle_area();
void circle_circumference();

int main() {
    int option;

    printf("Menu:\n1). menghitung luas lingkaran\n2). menghitung keliling lingkaaran\n");
    printf("Select: ");
    scanf("%i", &option);

    switch (option) {
        case 1:
            circle_area();
            break;

        case 2:
            circle_circumference();
            break;

        default:
            printf("input anda salah\n");
            break;
    }

    return 0;
}

void circle_area() {
    double radius, result;

    printf("Masukan jari-jari: ");
    scanf("%lf", &radius);

    result = PI * radius * radius;

    printf("Luasnya adalah %lf\n", result);
}

void circle_circumference() {
    double radius, result;

    printf("masukan jari-jari: ");
    scanf("%lf", &radius);

    result = 2 * PI * radius;

    printf("Kelilingnya adalah %lf\n", result);
}
