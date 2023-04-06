#include <stdio.h>
int main(){
    unsigned int a = -1;

    printf("%d \n", a);
    printf("%u \n", a);

    if (a == -1)
        printf("it reads as signed integer");

    return 0;
}