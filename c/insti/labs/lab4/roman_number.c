#include <stdio.h>
int main(){
    //int num_in_dec = 10;
    printf("%16s %14s\n", "Decimal numbers", "Roman numbers");
    for(int num_in_dec = 1; num_in_dec <= 100; num_in_dec++)
    {
        printf("%16d  ", num_in_dec);

        if((10 <= num_in_dec) && (num_in_dec < 20))
        printf("X");
        else if((20 <= num_in_dec) && (num_in_dec < 30))
        printf("XX");
        else if((30 <= num_in_dec) && (num_in_dec < 40))
        printf("XX");
        else if((40 <= num_in_dec) && (num_in_dec < 50))
        printf("XL");
        else if((50 <= num_in_dec) && (num_in_dec < 60))
        printf("L");
        else if((60 <= num_in_dec) && (num_in_dec < 70))
        printf("LX");
        else if((70 <= num_in_dec) && (num_in_dec < 80))
        printf("LXX");
        else if((80 <= num_in_dec) && (num_in_dec < 90))
        printf("LXXX");
        else if((90 <= num_in_dec) && (num_in_dec < 100))
        printf("XC"); 
        else if(num_in_dec == 100)
        printf("C");   
        if ((num_in_dec % 10) == 1)
        printf("I");
        else if ((num_in_dec % 10) == 2)
        printf("II");
        else if ((num_in_dec % 10) == 3)
        printf("III");
        else if ((num_in_dec % 10) == 4)
        printf("IV");
        else if ((num_in_dec % 10) == 5)
        printf("V");
        else if ((num_in_dec % 10) == 6)
        printf("VI");
        else if ((num_in_dec % 10) == 7)
        printf("VII");
        else if ((num_in_dec % 10) == 8)
        printf("VIII");
        else if ((num_in_dec % 10) == 9)
        printf("IX");

        puts("");
    }
    return 0;
}