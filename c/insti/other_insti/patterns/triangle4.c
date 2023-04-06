// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("Enter a number : ");
//     scanf("%d", &size);
//     int row = 1;
//     while(row <= size)
//     {
//         int coloumn = 1;
//         while(coloumn < row)
//         {
//             printf(" ");
//             coloumn++;
//         }
//         coloumn = 1;
//         while(coloumn <= 2 * (size - row) + 1)
//         {
//             printf("*");
//             coloumn++;
//         }
//         puts("");
//         row++;
//     }
// }


//**********TO INVERT THE PATTERN UP TO DOWN**********//
//initialization, row = 1 >>>>> row = size
//row++ >>>>> row--
//following code is the invert form triangle3.c


#include <stdio.h>

int main()
{
    int size;
    printf("Enter aa number : ");
    scanf("%d", &size);
    int row = size;
    while(row > 0)
    {
        int coloumn = 1;
        while(coloumn <= (size - row))
        {
            printf(" ");
            coloumn++;
        }
        coloumn = 1;
        while(coloumn <= (2 * row - 1))
        {
            printf("*");
            coloumn++;
        }
        puts("");
        row--;
    }
}