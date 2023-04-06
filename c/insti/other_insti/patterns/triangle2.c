// with two loops
// #include <stdio.h>

// int main()
// {
//     int row = 1;
//     int size;
//     printf("Enter a number : ");
//     scanf("%d", &size);

//     while(row <= size)
//     {
//         int coloumn = 1;
//         while(coloumn <= 2 * size)
//         {
//             if((coloumn >= (size - row + 1)) && (coloumn <= (size)))
//             {
//                 printf("*   ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//             coloumn++;
//         }

//         puts("");
//         row++;
//     }
// }



//with three loops
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
        while(coloumn <= (size - row))
        {
            printf("  ");
            coloumn++;
        }
        coloumn = 1;
        while(coloumn <= row)
        {
            printf("*   ");
            coloumn++;
        }

        puts("");
        row++;
    }
}