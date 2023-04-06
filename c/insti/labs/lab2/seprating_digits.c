#include <stdio.h>
int main(){
    int num; // 5 digit number
    int a,b,c,d,e; // decimal digits e.g. e is the ones place digit

    printf("Enter a 5 digit number\n> ");
    scanf("%d", &num);

    if (num > 9999 && num < 100000)
    {
        e = num%10;
        d = num%100 / 10;
        c = num%1000 / 100;
        b = num%10000 / 1000;
        a = num%100000 / 10000;
        printf("%d   %d   %d   %d   %d", a, b, c, d, e);
    }
    else
    {
        printf("%s", "It is not a 5 digit number");
    }

    return 0;




    return 0;
}
