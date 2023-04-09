#include <stdio.h>

int isRightTriangle(double x, double y, double z)
{
    if((x > 0) && (y > 0) && (z > 0) && ((x*x + y*y == z*z) || (x*x + z*z == y*y) || (y*y + z*z == x*x)))
    return 1;
    return 0;
}

int main()
{
    printf("%d", isRightTriangle(3, 5 ,-4));
}

