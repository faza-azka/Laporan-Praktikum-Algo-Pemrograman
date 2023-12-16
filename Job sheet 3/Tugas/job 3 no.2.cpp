#include <stdio.h>

int main() {
    double celcius, kelvin, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);

    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    printf("Suhu dalam Kelvin: %.2f K\n", kelvin);
    printf("Suhu dalam Fahrenheit: %.2f F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f Re\n", reamur);

    return 0;
}

