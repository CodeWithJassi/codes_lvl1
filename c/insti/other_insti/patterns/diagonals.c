#include <stdio.h>

int main()
{
    int size;
    printf("Enter a number : ");
    scanf("%d", &size);
    int factor = 0;  // set factor value to translate diagonal
    int row = 1;

    // while(row <= size)
    // {
    //     int coloumn = 1;
    //     while(coloumn <= size)
    //     {
    //         if(coloumn + row == size + 1 + factor)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //         coloumn++;
    //     }

    //     puts("");
    //     row++;
    // }

        while(row <= size)
    {
        int coloumn = 1;
        while(coloumn <= size)
        {
            if(coloumn == row + factor)
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