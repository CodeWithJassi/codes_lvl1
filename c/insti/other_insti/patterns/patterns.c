#include <stdio.h>

int main()
{
    int row = 1;
    int size;
    printf("Enter a number : ");
    scanf("%d", &size);

    while(row <= size)
    {
        int coloumn = 1;
        while(coloumn <= size)
        {
            //if(coloumn <= size) // for simple square
            //if(coloumn <= row) // right angled triangle (lower triangular)
            //if(coloumn >= row) // right angled triangle (inverted upper triangular) 
            //if(coloumn > (size - row )) // right angled triangle (inverted lower triangular)
            if(coloumn <= (size - row + 1)) // right angled triangle (upper triangular)
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