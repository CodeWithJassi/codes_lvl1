#include <stdio.h>
int main(){
    printf("%11s %11s %11s %11s \n", "Decimal", "Binary", "Octal", "Hexadecimal");
    for(int i = 1; i <= 256; i++)
    {
        int decimal = i;
        int binary = 0, base = 1, rem; // for binary conversion
        while (decimal > 0)
        {
            rem = decimal % 2;
            binary = binary + rem * base;
            decimal = decimal / 2;
            base = base * 10;
        }

        printf("%11d %11d %11o %11x\n", i, binary, i, i); // decimal binary octal hexadecimal
    }
    return 0;
}