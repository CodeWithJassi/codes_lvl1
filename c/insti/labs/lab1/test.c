#include <stdio.h>
int main(){
    unsigned int a = -4294967295;
    unsigned int b = 4294967295;
    printf("%d\n", a);
    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", a + b);
    return 0;
}