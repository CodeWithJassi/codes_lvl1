#include <stdio.h>


int main(){
    int limit = 1000;
    printf("%9s  %5s\n", "Decimal", "Roman");
    printf("%9s  %5s\n", " number", "number");
    for (int i = 1; i <= limit; i++)
    {
        int num = i;
        printf("%9d  ", num);
        while (num != 0)
        {
            if (num >= 1000)
            {
                printf("M");
                num -= 1000;
            }
            else if (num >= 500)
            {
                printf("D");
                num -= 500;
            }
            else if (num >= 400)
            {
                printf("CD");
                num -= 400;
            }
            else if (num >= 100)
            {
                printf("C");
                num -= 100;
            }
            else if (num >= 50)
            {
                printf("L");
                num -= 50;
            }
            else if (num >= 40)
            {
                printf("XL");
                num -= 40;
            }
            else if (num >= 10)
            {
                printf("X");
                num -= 10;
            }
            else if (num >= 9)
            {
                printf("IX");
                num -= 9;
            }
            else if (num >= 5)
            {
                printf("V");
                num -= 5;
            }
            else if (num >= 4)
            {
                printf("IV");
                num -= 4;
            }
            else if (num >= 1)
            {
                printf("I");
                num -= 1;
            }
        }
        puts("");
    }
}