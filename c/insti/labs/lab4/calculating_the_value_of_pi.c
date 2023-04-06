#include <stdio.h>

int main(){
    int n = 1000000;
    int sign = 1; // +1 or -1 
    double pi = 0;
    for(int i = 1; i <= n; i++)
    {
        pi += 4 * sign / (2.0 * i - 1);
        sign *= -1;
        printf("%11d %0.8f\n", i, pi);
    }
    return 0;
}