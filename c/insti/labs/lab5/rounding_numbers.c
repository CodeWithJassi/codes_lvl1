#include <stdio.h>
#include <math.h>

int roundToInterger(double number)
{
    return  floor(number + .5);
}


double roundToTenths(double number)
{
    return  floor(number * 10 + .51) / 10;
}


double roundToHunderedths(double number)
{
    return  floor(number * 100 + .51) / 100;
}

double roundThousandths(double number)
{
    return  floor(number * 1000 + .51) / 1000;
}


int main()
{
    printf("%d\n", roundToInterger(40.5));
    printf("%f\n", roundToTenths(45.25));
}