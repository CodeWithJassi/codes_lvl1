#include <stdio.h>
#include <math.h>

int main()
{
    float interest = 0.05;
    float principal = 1000;

    printf("%4s %14s\n", "Time", "Amount");

    for(int time = 1; time <= 10; ++time)
    {
        double amount = principal*pow(1 + interest, time);
        printf("%4d %14.02f\n", time, amount);
    }
}