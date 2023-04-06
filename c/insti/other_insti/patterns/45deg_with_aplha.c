#include <stdio.h>

int main()
{
    int size;
    printf("Enter a number : ");
    scanf("%d", &size);
    int row = 1;
    while(row <= size){
        int coloumn = 1;
        while(coloumn <= row)
        {
            printf("%c ", 64 + coloumn);
            coloumn++;
        }
        puts("");
        row++;
    }
    while(row - 2 >= 1)
    {
        int coloumn = 1;
        while(coloumn <= row - 2)
        {
            printf("%c ", 64 + coloumn);
            coloumn++;
        }
        puts("");
        row--;
    }
}