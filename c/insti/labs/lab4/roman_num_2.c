#include <stdio.h>

void printRomanNumeral(int decimal) {
    int i;
    int numbers[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *letters[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (i = 0; i < 9; i++) {
        while (decimal >= numbers[i]) {
            printf("%s", letters[i]);
            decimal -= numbers[i];
        }
    }
}

int main() {
    int i;

    printf("Roman Numeral Equivalents for Decimals 1-100:\n");
    printf("-------------------------------------------\n");

    for (i = 1; i <= 100; i++) {
        printf("%d:\t", i);
        printRomanNumeral(i);
        printf("\n");
    }

    return 0;
}