#include <stdio.h>

int main(void)
{
    int size;
    printf("Enter a number(>= 3) : ");
    scanf("%d", &size);

    int row = 1;
    while (row <= (2 * size - 1))
    {
        int coloumn = 1;
        while (coloumn <= (2 * size - 1))
        {
            if (((coloumn == 1) && (row <= size)) || ((row == 1) && (coloumn >= size)) || ((coloumn == 2 * size - 1) && (row >= size)) || ((row == 2 * size - 1) && (coloumn <= size)) || (coloumn == size) || (row == size))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            coloumn++;
        }
        puts("");
        row++;
    }
}

