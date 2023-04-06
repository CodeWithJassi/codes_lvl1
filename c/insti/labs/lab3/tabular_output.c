#include <stdio.h>
int main(){

    printf("N\tN^2\tN^3\tN^4\n");

    int i=1;
    while(i <= 10)
    {
        printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);
        i++;
    }

    return 0;
}