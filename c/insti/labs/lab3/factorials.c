#include <stdio.h>
int main(){

    int factorials = 1;

    int i = 1;
    while(i <= 5) // (i <= num) enter the value of "num" according list the factorials
    {
        factorials *= i;
        printf("%d! = %d\n", i, factorials);
        i++;
    }

    return 0;
}