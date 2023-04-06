#include <stdio.h>

int mystry(int z, int y);

int main()
{
    int a,b;
    printf("Enter 2 number by space: ");
    scanf("%d %d", &a, &b);

    printf("the result is : %d", mystry(a, b));
    
}

int mystry(int a, int b)
{
    if (b == 1)
        return a;
    else
        return a + mystry(a, b - 1);
}