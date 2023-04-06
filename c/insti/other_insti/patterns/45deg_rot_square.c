#include <stdio.h>

int main()
{
    int size;
    printf("Enter a number : ");
    scanf("%d", &size);
    int row = 1;
    while(row <= size)
    {
        int coloumn = 1;
        while(coloumn <= (size - row))
        {
            printf("  ");
            coloumn++;
        }
        coloumn = 1;
        while(coloumn <= 2 * row - 1)
        {
            printf("* ");
            coloumn++;
        }
        puts("");
        row++;
    }

    row = size;
    while(row > 1)
    {
        int coloumn = 1;
        while(coloumn <= (size - row + 1))
        {
            printf("  ");
            coloumn++;
        }
        coloumn = 1;
        while(coloumn <= 2 * row - 3)
        {
            printf("* ");
            coloumn++;
        }
        puts("");
        row--;
    }



}