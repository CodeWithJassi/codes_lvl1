#include <stdio.h>
int main(){
    int number = 234;
    int factor = 2;
    int last_factor = 1;
    while(factor <= number)
    {
        if((number % factor) == 0)
        {
            if((factor != last_factor))
            {
                printf("%d ", factor);
                last_factor = factor;
            }
            number /= factor;
        }
        else
        factor++;
    }
    return 0;
}