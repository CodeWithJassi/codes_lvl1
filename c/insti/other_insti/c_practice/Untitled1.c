#include <stdio.h>

int main(void)
{
    int size;
    printf("enter a number(size of triangle) : ");
    scanf("%d", &size);

    int row = 1;
    while (row <= size)
    {
        int coloumn = 1;
        while (coloumn <= (2 * size - 1))
        {
            if ((coloumn >= (size - row + 1)) && (coloumn <= (size + row - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            coloumn++;
        }
        puts("");
        row++;
    }
}
